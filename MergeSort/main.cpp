#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void NhapMang(int M[], int n);
void XuatMang(int M[], int n);
void MergeSort(int M[], int left, int right);
void Merge(int M[], int left, int mid, int right);
int main(int argc, char** argv) {
	int n;
	cout<<"Nhap n:";
	cin>>n;
	int M[n];
	NhapMang(M,n);
	cout<<"Mang sau khi nhap:\n";
	XuatMang(M,n);
	MergeSort(M,0,n-1);
	cout<<"\nMang sau khi sort:\n";
	XuatMang(M,n);
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
void MergeSort(int M[], int left, int right) {
	if(left>=right) return;
	int mid=(left+right)/2;
	MergeSort(M,left,mid);
	MergeSort(M,mid+1,right);
	Merge(M,left,mid,right);
}
void Merge(int M[], int left, int mid, int right) {
	int nTemp=right-left+1;
	int Temp[nTemp];
	int pos=0;
	int i=left;
	int j=mid+1;
	while(!(i>mid && j>right)) {
		if((i<=mid && j<=right && M[i]<M[j]) || j>right) {
			Temp[pos++]=M[i++];
		} else {
			Temp[pos++]=M[j++];
		}
	}
	for(int i=0;i<nTemp;i++) {
		M[left+i]=Temp[i];
	}
}
