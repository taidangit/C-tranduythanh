#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct NhanVien {
	int ma;
	char ten[50];
};
void LuuFile() {
	NhanVien dsNv[4];
	dsNv[0].ma=1;
	strcpy(dsNv[0].ten, "Teo");
	dsNv[1].ma=2;
	strcpy(dsNv[1].ten, "Ty");
	dsNv[2].ma=3;
	strcpy(dsNv[2].ten, "Bin");
	dsNv[3].ma=4;
	strcpy(dsNv[3].ten, "Bo");
	ofstream outfile("csdl.txt",ofstream::binary);
	outfile.write((char*)dsNv, sizeof(dsNv));
	outfile.close();
}
void XuatNhanVien(NhanVien dsNv[], int n) {
	for(int i=0;i<n;i++) {
		cout<<dsNv[i].ma<<"\t"<<dsNv[i].ten<<endl;
	}
}
void DocFile() {
	ifstream infile("csdl.txt",ofstream::binary);
	infile.seekg(0,infile.end);
	long size=infile.tellg();
	infile.seekg(0);
	int real=size/sizeof(NhanVien);
	NhanVien dsNv[real];
	infile.read((char*)dsNv, sizeof(dsNv));
	infile.close();
	XuatNhanVien(dsNv,real);
}
int main(int argc, char** argv) {
	DocFile();
	return 0;
}
