#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien {
	int ma;
	char ten[255];
};
void NhapMang(SinhVien dsSv[], int n);
void XuatMang(SinhVien dsSv[], int n);
int main(int argc, char** argv) {
	int n=3;
	SinhVien dsSv[n];
	NhapMang(dsSv, n);
	XuatMang(dsSv, n);
	
	return 0;
}
void NhapMang(SinhVien dsSv[], int n) {
	for(int i=0;i<n;i++) {
		cout<<"Nhap sinh vien thu "<<i<<endl;
		cout<<"Nhap ma:";
		cin>>dsSv[i].ma;
		cin.ignore();
		cout<<"Nhap ten:";
		gets(dsSv[i].ten);
	}
}
void XuatMang(SinhVien dsSv[], int n) {
	for(int i=0;i<n;i++) {
		cout<<dsSv[i].ma<<";"<<dsSv[i].ten<<endl;
	}
}
