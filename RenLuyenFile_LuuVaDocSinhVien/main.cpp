#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien {
	int ma;
	char ten[255];
	double dtb;
};
SinhVien *NhapSinhVien() {
	SinhVien *sv=new SinhVien;
	cout<<"Nhap ma sv:";
	cin>>sv->ma;
	cin.ignore();
	cout<<"Nhap ten sv:";
	gets(sv->ten);
	cout<<"Nhap diem sv:";
	cin>>sv->dtb;
	return sv;	
}
void NhapDanhSachSV(SinhVien **&dsSv, int n) {
	for(int i=0;i<n;i++) {
		cout<<"Nhap sinh vien thu "<<i<<":\n";
		SinhVien *sv=NhapSinhVien();
		*(dsSv+i)=sv;
		
	}
}
void XuatSV(SinhVien *sv) {
	cout<<sv->ma<<"-"<<sv->ten<<"-"<<sv->dtb<<endl;
}
void XuatDanhSachSV(SinhVien **dsSv, int n) {
	for(int i=0;i<n;i++) {
		SinhVien *sv=*(dsSv+i);
		XuatSV(sv);
	}
}

void LuuFile(SinhVien **dsSv, int n) {
	ofstream outfile("csdlsv.txt", ofstream::binary);
	for(int i=0;i<n;i++) {
		SinhVien *sv=*(dsSv+i);
		outfile.write((char*)sv,sizeof(SinhVien));
	}
	outfile.close();
}
void DocFile(SinhVien **&dsSv, int &n) {
	ifstream infile("csdlsv.txt",ifstream::binary);
	infile.seekg(0,infile.end);
	long size=infile.tellg();
	infile.seekg(0);
	n=size/sizeof(SinhVien);
	dsSv=new SinhVien*[n];
	for(int i=0;i<n;i++) {
		SinhVien *sv=new SinhVien;
		infile.read((char*)sv,sizeof(SinhVien));
		*(dsSv+i)=sv;
	}
	infile.close();
}
int main(int argc, char** argv) {
/*	int n=3;
	SinhVien **dsSv=new SinhVien*[n];
	NhapDanhSachSV(dsSv,n);
	cout<<"Danh sach sinh vien:\n";
	XuatDanhSachSV(dsSv,n);
	LuuFile(dsSv,n);
*/	
	int n;
	SinhVien **dsSv=NULL;
	DocFile(dsSv,n);
	XuatDanhSachSV(dsSv,n);	
	return 0;
}
