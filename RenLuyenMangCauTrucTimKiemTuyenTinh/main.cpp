#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Book {
	int ma;
	char ten[150];
	int nam;
};
void NhapDanhSach(Book dsBook[], int n);
void XuatDanhSach(Book dsBook[], int n);
int sosach=0;
Book *TimSachTheoNamXuatBan(Book dsBook[], int n, int y);
int main(int argc, char** argv) {
	int n;
	cout<<"Nhap so cuon sach:";
	cin>>n;
	Book dsBook[n];
	NhapDanhSach(dsBook, n);
	cout<<"Xuat danh sach sach:\n";
	XuatDanhSach(dsBook, n);
	
	cout<<"Nhap nam muon tim:";
	int y;
	cin>>y;
	Book *dsSachTim=TimSachTheoNamXuatBan(dsBook,n,y);
	if(sosach==0) {
		cout<<"Khong co cuon sach nao co nam xuat ban="<<y<<endl;
	} else {
		cout<<"\nCac sach tim thay:\n";
		XuatDanhSach(dsSachTim, sosach);
	}
	return 0;
}
void NhapDanhSach(Book dsBook[], int n) {
	for(int i=0;i<n;i++)  {
		cout<<"Nhap sach thu "<<i<<endl;
		cout<<"Nhap ma:";
		cin>>dsBook[i].ma;
		cin.ignore();
		cout<<"Nhap ten:";
		gets(dsBook[i].ten);
		cout<<"Nam xuat ban:";
		cin>>dsBook[i].nam;
	}
}
void XuatDanhSach(Book dsBook[], int n) {
	for(int i=0;i<n;i++) {
		Book b=dsBook[i];
		cout<<b.ma<<"\t"<<b.ten<<"\t"<<b.nam<<endl;
	}
}
Book *TimSachTheoNamXuatBan(Book dsBook[], int n, int y) {
	Book dsTim[n];
	
	for(int i=0;i<n;i++) {
		Book b=dsBook[i];
		if(b.nam==y) {
			dsTim[sosach]=b;
			sosach++;
		}
	}
	return dsTim;
}
