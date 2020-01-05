#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Tong2So(int a, int b);
void XuatDuLieu(int x);
void Output();
int main(int argc, char** argv) {
	int a, b;
	cout<<"Nhap a:";
	cin>>a;
	cout<<"Nhap b:";
	cin>>b;
	cout<<"KQ="<<Tong2So(a,b)<<endl;
	cout<<"KQ="<<Tong2So(113,114)<<endl;
	
	int kq3=Tong2So(1,5);
	XuatDuLieu(kq3);
	cout<<"\nHam goi Ham:\n";
	Output();
	return 0;
}

int Tong2So(int a, int b) {
	return a+b;
}
void XuatDuLieu(int x) {
	cout<<x<<endl;
}
void Output() {
	int kq=Tong2So(9,10);
	XuatDuLieu(kq);
}
