#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Book {
	char isbn[20];
	char name[150];
	int pages;
	char author[150];
};
void NhapSach(Book &b) {
	cout<<"Nhap ma sach:";
	gets(b.isbn);
	cout<<"Nhap ten sach:";
	gets(b.name);
	cout<<"Nhap so trang:";
	cin>>b.pages;
	cin.ignore();
	cout<<"Nhap tac gia:";
	gets(b.author);
}
void NhapDanhSachSach(Book dsSach[], int n) {
	for(int i=0;i<n;i++) {
		cout<<"Nhap sach thu "<<i<<"\n";
		NhapSach(dsSach[i]);
	}
}
void XuatSach(Book b) {
	cout<<b.isbn<<"-"<<b.name<<"-"<<b.pages<<"-"<<b.author<<endl;
}
void XuatDanhSachSach(Book dsSach[], int n) {
	for(int i=0;i<n;i++) {
		XuatSach(dsSach[i]);
	}
}
void LuuFile(Book dsSach[], int n) {
	ofstream outfile("csdlsach.txt", ofstream::binary);
	for(int i=0;i<n;i++) {
		Book b=dsSach[i];
		outfile.write((char*)&b, sizeof(Book));
	}
	outfile.close();
}
void DocFile(Book dsSach[], int &n) {
	ifstream infile("csdlsach.txt", ifstream::binary);
	infile.seekg(0,infile.end);
	long size=infile.tellg();
	infile.seekg(0);
	n=size/sizeof(Book);
	for(int i=0;i<n;i++) {
		Book b;
		infile.read((char*)&b,sizeof(Book));
		dsSach[i]=b;
	}
	infile.close();
}
void TimSach(Book dsSach[], int n, char *tg) {
	for(int i=0;i<n;i++) {
		Book b=dsSach[i];
		int kq=strcmp(b.author, tg);
		if(kq==0) {
			XuatSach(b);
		}
	}
}
void XuatTop3(Book dsSach[], int n) {
	int m=n<3?n:3;
	for(int i=0;i<m;i++) {
		XuatSach(dsSach[i]);
	}
}
void SapXep(Book dsSach[], int n) {
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			Book b1=dsSach[i];
			Book b2=dsSach[j];
			if(b1.pages<b2.pages) {
				dsSach[i]=b2;
				dsSach[j]=b1;
			}
		}
	} 
}
int main(int argc, char** argv) {
	/*int n=5;
	Book dsSach[n];
	NhapDanhSachSach(dsSach,n);
	cout<<"Danh sach sach:\n";
	XuatDanhSachSach(dsSach,n);
	LuuFile(dsSach,n);*/
	
	Book dsSach[5];
	int n;
	DocFile(dsSach,n);
	XuatDanhSachSach(dsSach,n);
	cout<<"Nhap tac gia:";
	char tg[150];
	gets(tg);
	TimSach(dsSach, n, tg);
	
	SapXep(dsSach, n);
	cout<<"\n================================\n";
	cout<<"Danh sach sau khi sort:\n";
	XuatDanhSachSach(dsSach, n);
	cout<<"\n================================\n";
	cout<<"Top3:\n";
	XuatTop3(dsSach,n);
	return 0;
}
