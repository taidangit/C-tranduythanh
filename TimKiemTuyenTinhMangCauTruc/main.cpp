#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien {
	char ma[10];
	char ten[150];
	bool gioitinh;
};
void NhapDanhSach(SinhVien dsSv[], int n);
void XuatDanhSach(SinhVien dsSv[], int n);
SinhVien *TimSinhVienTheoMa(SinhVien dsSv[], int n, char matim[]);
int main(int argc, char** argv) {
	int n=3;
	SinhVien dsSv[n];
	NhapDanhSach(dsSv, n);
	cout<<"Danh sach sinh vien sau khi nhap:\n";
	XuatDanhSach(dsSv,n);
	char matim[10];
	cout<<"Nhap ma muon tim:";
	gets(matim);
	SinhVien *pSv=TimSinhVienTheoMa(dsSv,n,matim);
	if(pSv==NULL) {
		cout<<"Khong tim thay "<<matim<<endl;
	} else {
		cout<<"Tim thay sinh vien co ma "<<matim<<endl;
		cout<<pSv->ma<<"-"<<pSv->ten<<"-"<<pSv->gioitinh<<endl;
	}
	
	cout<<"Nhap gioi tinh:";
	char gioitinhtim[2];
	gets(gioitinhtim);
	for(int i=0;i<n;i++) {
		bool gttim=true;//nam
		if(strcmp(gioitinhtim,"f")) {
			gttim=false;//nu
		}
		if(dsSv[i].gioitinh==gttim) {
			cout<<dsSv[i].ma<<"\t"<<dsSv[i].ten<<"\t"<<(dsSv[i].gioitinh==true?"Nu":"Nam")<<endl;
		}
	}
	return 0;
}
void NhapDanhSach(SinhVien dsSv[], int n) {
	for(int i=0;i<n;i++) {
		cout<<"Nhap sinh vien thu "<<i<<endl;
		cout<<"Nhap ma:";
		gets(dsSv[i].ma);
		cout<<"Nhap ten:";
		gets(dsSv[i].ten);
		cout<<"Gioi tinh(m/f):";
		char gt[3];
		gets(gt);
		if(strcmp(gt,"m")==0) {
			dsSv[i].gioitinh=false;
		} else {
			dsSv[i].gioitinh=true;
		}
	}
}
void XuatDanhSach(SinhVien dsSv[], int n) {
	for(int i=0;i<n;i++) {
		cout<<dsSv[i].ma<<"\t"<<dsSv[i].ten<<"\t"<<(dsSv[i].gioitinh==true?"Nu":"Nam")<<endl;
	}
}
SinhVien *TimSinhVienTheoMa(SinhVien dsSv[], int n, char matim[]) {
	for(int i=0;i<n;i++) {
		if(strcmp(dsSv[i].ma,matim)==0) {
			return &dsSv[i];
		}
	}
	return NULL;
}
