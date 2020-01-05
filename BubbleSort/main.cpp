#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void NhapMang(int M[], int n);
void XuatMang(int M[], int n);
void BubbleSort(int M[], int n);
int main(int argc, char** argv) {
	int n;
	cout<<"Nhap n:";
	cin>>n;
	int M[n];
	NhapMang(M,n);
	cout<<"Mang sau khi nhap:\n";
	XuatMang(M,n);
	
	BubbleSort(M,n);
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
void BubbleSort(int M[], int n) {
	for(int i=0;i<n-1;i++) {
		for(int j=n-1;j>i;j--) {
			if(M[j]<M[j-1]) {
				int temp=M[j];
				M[j]=M[j-1];
				M[j-1]=temp;
			}
		}
	}
}
