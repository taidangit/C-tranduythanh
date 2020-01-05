#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct NhanVien {
	int ma;
	char ten[150];
	int tuoi;
};
NhanVien *NhapNhanVien();
void XuatNhanVien(NhanVien *nv);
void NhapDanhSachNhanVien(NhanVien **&dsNv, int n);
void XuatDanhSachNhanVien(NhanVien **dsNv, int n);
void InterchangeSort(NhanVien **&dsNv, int n);
void QuickSort(NhanVien **&dsNv, int left, int right);
int main(int argc, char** argv) {
	NhanVien **dsNv;
	int n=3;
	NhapDanhSachNhanVien(dsNv,n);
	cout<<"Danh sach sau khi nhap:\n";
	XuatDanhSachNhanVien(dsNv,n);
	InterchangeSort(dsNv,n);
	cout<<"\nDanh sach nhan vien sau khi sap xep Interchange sott:\n";
	XuatDanhSachNhanVien(dsNv,n);
	QuickSort(dsNv, 0, n-1);
	cout<<"\nDanh sach nhan vien sau khi sap Quick sort:\n";
	XuatDanhSachNhanVien(dsNv,n);
	return 0;
}
NhanVien *NhapNhanVien() {
	NhanVien *nv=new NhanVien;
	cout<<"Nhap ma:";
	cin>>nv->ma;
	cin.ignore();
	cout<<"Nhap ten:";
	gets(nv->ten);
	cout<<"Nhap tuoi:";
	cin>>nv->tuoi;
	return nv;
}
void XuatNhanVien(NhanVien *nv) {
	cout<<nv->ma<<"\t"<<nv->ten<<"\t"<<nv->tuoi<<endl;
}
void NhapDanhSachNhanVien(NhanVien **&dsNv, int n) {
	dsNv=new NhanVien*[n];
	for(int i=0;i<n;i++) {
		*(dsNv+i)=NhapNhanVien();
	}
}
void XuatDanhSachNhanVien(NhanVien **dsNv, int n) {
	for(int i=0;i<n;i++) {
		NhanVien *nv=*(dsNv+i);
		XuatNhanVien(nv);
	}
}
void InterchangeSort(NhanVien **&dsNv, int n) {
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			NhanVien *nvi=*(dsNv+i);
			NhanVien *nvj=*(dsNv+j);
			if(nvj->tuoi<nvi->tuoi) {
				int ma=nvi->ma;
				char ten[150];
				strcpy(ten,nvi->ten);
				int tuoi=nvi->tuoi;
				
				nvi->ma=nvj->ma;
				strcpy(nvi->ten,nvj->ten);
				nvi->tuoi=nvj->tuoi;
				
				nvj->ma=ma;
				strcpy(nvj->ten,ten);
				nvj->tuoi=tuoi;
			
			}
		}
	}
}
void QuickSort(NhanVien **&dsNv, int left, int right) {
	if(left>=right) return;
	NhanVien *pivot=*(dsNv+((left+right)/2));
	int i=left;
	int j=right;
	do {
		while(stricmp((*(dsNv+i))->ten,pivot->ten)<0) {
			i++;
		}
		while(stricmp((*(dsNv+j))->ten,pivot->ten)>0) {
			j--;
		}
		if(i<=j) {
			NhanVien *nvi=*(dsNv+i);
			NhanVien *nvj=*(dsNv+j);
			int ma=nvi->ma;
			char ten[150];
			strcpy(ten,nvi->ten);
			int tuoi=nvi->tuoi;
				
			nvi->ma=nvj->ma;
			strcpy(nvi->ten,nvj->ten);
			nvi->tuoi=nvj->tuoi;
				
			nvj->ma=ma;
			strcpy(nvj->ten,ten);
			nvj->tuoi=tuoi;
			
			i++;
			j--;
		}
	} while(i<j);
	QuickSort(dsNv, left, j);
	QuickSort(dsNv,i,right);
}
