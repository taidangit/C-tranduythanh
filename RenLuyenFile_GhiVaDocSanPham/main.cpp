#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SanPham {
	int ma;
	char ten[255];
	int gia;
};
void NhapSanPham(SanPham &sp);
void NhapDanhSachSanPham(SanPham dsSp[], int n);
void XuatSanPham(SanPham sp);
void XuatDanhSachSanPham(SanPham dsSp[], int n);
void LuuFile(SanPham dsSp[], int n);
void DocFile(SanPham dsSp[], int &n);
int main(int argc, char** argv) {
	/*int n=3;
	SanPham dsSp[n];
	NhapDanhSachSanPham(dsSp,n);
	cout<<"San pham sau khi nhap:\n";
	XuatDanhSachSanPham(dsSp,n);
	
	LuuFile(dsSp,n);*/
	SanPham dsSp[3];
	int n;
	DocFile(dsSp,n);
	XuatDanhSachSanPham(dsSp,n);
	cout<<"so luong="<<n<<endl;
	return 0;
}
void NhapSanPham(SanPham &sp) {
	cout<<"Nhap ma:";
	cin>>sp.ma;
	cin.ignore();
	cout<<"Nhap ten:";
	gets(sp.ten);
	cout<<"Nhap gia:";
	cin>>sp.gia;
}
void NhapDanhSachSanPham(SanPham dsSp[], int n) {
	for(int i=0;i<n;i++) {
		cout<<"Nhap san pham thu "<<i<<":\n";
		NhapSanPham(dsSp[i]);
	}
}
void XuatSanPham(SanPham sp) {
	cout<<sp.ma<<"-"<<sp.ten<<"-"<<sp.gia<<endl;
}
void XuatDanhSachSanPham(SanPham dsSp[], int n) {
	for(int i=0;i<n;i++) {
		XuatSanPham(dsSp[i]);
	}
}
void LuuFile(SanPham dsSp[], int n) {
	ofstream outfile("csdlsp.dat",ofstream::binary);
	for(int i=0;i<n;i++) {
		SanPham sp=dsSp[i];
		outfile.write((char*)&sp,sizeof(SanPham));
	}
	outfile.close();
}
void DocFile(SanPham dsSp[], int &n) {
	ifstream infile("csdlsp.dat",ifstream::binary);
	int i=0;
	while(!infile.eof()) {
		SanPham sp;
		infile.read((char*)&sp, sizeof(SanPham));
		dsSp[i++]=sp;
	}
	infile.close();
	n=i;
}
