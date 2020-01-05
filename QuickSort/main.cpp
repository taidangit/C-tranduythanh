#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void NhapMang(int M[], int n);
void XuatMang(int M[], int n);
void QuickSort(int M[], int left, int right);
int main(int argc, char** argv) {
	int n;
	cout<<"Nhap n:";
	cin>>n;
	int M[n];
	NhapMang(M,n);
	cout<<"Xuat mang:\n";
	XuatMang(M,n);
	QuickSort(M,0,n-1);
	cout<<"\nMang sau khi sort:\n";
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
void QuickSort(int M[], int left, int right) {
	if(left>=right) return;
	int pivot=M[(left+right)/2];
	int i=left;
	int j=right;
	do {
		while(M[i]<pivot) i++;
		while(M[j]>pivot) j--;
		if(i<=j) {
			int temp=M[i];
			M[i]=M[j];
			M[j]=temp;
			i++;
			j--;
		}
	} while(i<j);
	QuickSort(M,left,j);
	QuickSort(M,i,right);
}
