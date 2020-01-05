#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SanPham {
	int ma;
	char ten[150];
	float gia;
};
void NhapDanhSach(SanPham dsSp[], int n);
void XuatDanhSach(SanPham dsSp[], int n);
SanPham *TimSanPhamTheoGia(SanPham dsSp[], int n, float giatim);
int main(int argc, char** argv) {
	int n;
	cout<<"Nhap so san pham:";
	cin>>n;
	SanPham dsSp[n];
	NhapDanhSach(dsSp, n);
	cout<<"Danh sach san pham sau khi nhap:\n";
	XuatDanhSach(dsSp,n);
	float giatim;
	cout<<"Nhap gia can tim:";
	cin>>giatim;
	SanPham *sp=TimSanPhamTheoGia(dsSp,n,giatim);
	if(sp==NULL) {
		cout<<"Khong thay sp co gia="<<giatim<<endl;
	} else {
		cout<<sp->ma<<"\t"<<sp->ten<<"\t"<<sp->gia<<endl;
	}
	return 0;
}
void NhapDanhSach(SanPham dsSp[], int n) {
	for(int i=0;i<n;i++) {
		cout<<"Nhap san pham thu "<<i<<endl;
		cout<<"Nhap ma:";
		cin>>dsSp[i].ma;
		cin.ignore();
		cout<<"Nhap ten:";
		gets(dsSp[i].ten);
		cout<<"Nhap gia:";
		cin>>dsSp[i].gia;
	}
}
void XuatDanhSach(SanPham dsSp[], int n) {
	for(int i=0;i<n;i++) {
		SanPham sp=dsSp[i];
		cout<<sp.ma<<"\t"<<sp.ten<<"\t"<<sp.gia<<endl;
	}
}
SanPham *TimSanPhamTheoGia(SanPham dsSp[], int n, float giatim) {
	int left=0;
	int right=n-1;
	int mid=0;
	do {
		mid=(left+right)/2;
		SanPham sp=dsSp[mid];
		if(sp.gia==giatim) {
			return &sp;
		} else if(sp.gia>giatim) {
			right=mid-1;
		} else {
			left=mid+1;
		}
		
	} while(left<=right);
	return NULL;
}
