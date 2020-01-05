#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void NhapMang(int M[], int n);
void XuatMang(int M[], int n);
int lSearch(int M[], int n, int x);
int main(int argc, char** argv) {
	int n=10;
	int M[n];
	NhapMang(M,n);
	cout<<"Mang sau khi nhap:\n";
	XuatMang(M,n);
	int x;
	cout<<"\nNhap so x:";
	cin>>x;
	int kq=lSearch(M,n,x);
	if(kq==-1) {
		cout<<"Khong tim thay "<<x<<" trong mang"<<endl;
	} else {
		cout<<"Thay "<<x<<" tai vi tri "<<kq<<endl;
	}
	return 0;
}
void NhapMang(int M[], int n) {
	srand(time(NULL));
	for(int i=0;i<n;i++) {
		M[i]=rand()%100;
	}
}
void XuatMang(int M[], int n) {
	for(int i=0;i<n;i++) {
		cout<<M[i]<<"\t";
	}
}
int lSearch(int M[], int n, int x) {
	for(int i=0;i<n;i++) {
		if(M[i]==x) {
			return i;
		}
	}
	return -1;
}
