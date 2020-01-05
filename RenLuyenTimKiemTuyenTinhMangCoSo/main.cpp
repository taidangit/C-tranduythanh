#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void NhapMang(int M[], int n);
void XuatMang(int M[], int n);
int Dem(int M[], int n, int x);
int MaxChan(int M[], int n);
int MaxLe(int M[], int n);
int main(int argc, char** argv) {
	int n;
	cout<<"Nhap so phan tu:";
	cin>>n;
	int M[n];
	NhapMang(M,n);
	cout<<"Mang sau khi nhap:\n";
	XuatMang(M,n);
	int x;
	cout<<"\nNhap x:";
	cin>>x;
	int dem=Dem(M,n,x);
	cout<<x<<" xuat hien "<<dem<<" lan\n";
	
	int maxChan=MaxChan(M,n);
	cout<<"Max chan="<<maxChan<<endl;
	
	int maxLe=MaxLe(M,n);
	cout<<"Max le="<<maxLe<<endl;
	return 0;
}
void NhapMang(int M[], int n) {
	for(int i=0;i<n;i++) {
		cout<<"M["<<i<<"]=";
		cin>>M[i];
	}
}
void XuatMang(int M[], int n) {
	for(int i=0;i<n;i++) {
		cout<<M[i]<<"\t";
	}
}
int Dem(int M[], int n, int x) {
	int dem=0;
	for(int i=0;i<n;i++) {
		if(M[i]==x) {
			dem++;
		}
	}
	return dem;
}
int MaxChan(int M[], int n) {
	int max=M[0];
	for(int i=0;i<n;i++) {
		if(M[i]>max && M[i]%2==0) {
			max=M[i];
		}
	}
	return max;
}
int MaxLe(int M[], int n) {
	int maxLe=M[0];
	for(int i=0;i<n;i++) {
		if(M[i]>maxLe && M[i]%2!=0) {
			maxLe=M[i];
		}
	}
	return maxLe;
}
