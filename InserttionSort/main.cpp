#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void NhapMang(int M[], int n);
void XuatMang(int M[], int n);
void InsertionSort(int M[], int n);
int main(int argc, char** argv) {
	int n;
	cout<<"Nhap n:";
	cin>>n;
	int M[n];
	NhapMang(M,n);
	cout<<"Mang sau khi nhap:\n";
	XuatMang(M,n);
    InsertionSort(M,n);
	cout<<"\nMang sau khi sap xep:\n";
	XuatMang(M,n);
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
void InsertionSort(int M[], int n) {
	int pos=0;
	int x;
	for(int i=1;i<n;i++) {
		x=M[i];
		for(pos=i;(pos>0) && (M[pos-1]>x); pos--) {
			M[pos]=M[pos-1];
		}
		
		M[pos]=x;
	}
}
