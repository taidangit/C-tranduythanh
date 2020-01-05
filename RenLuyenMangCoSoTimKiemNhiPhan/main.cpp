#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void NhapMang(float M[], int n);
void XuatMang(float M[], int n);
int bSearch(float M[], int n, float x);
int main(int argc, char** argv) {
	int n;
	cout<<"Nhap so phan tu :";
	cin>>n;
	float M[n];
	NhapMang(M,n);
	cout<<"Mang sau khi nhap:\n";
	XuatMang(M,n);
	
	float x;
	cout<<"\nNhap x:";
	cin>>x;
	int kq=bSearch(M,n,x);
	if(kq==-1) {
		cout<<"Khong thay "<<x<<endl;
	} else {
		cout<<"Thay "<<x<<" o vi tri "<<kq<<endl;
	}
	return 0;
}
void NhapMang(float M[], int n) {
	for(int i=0;i<n;i++) {
		cout<<"M["<<i<<"]=";
		cin>>M[i];
	}
}
void XuatMang(float M[], int n) {
	for(int i=0;i<n;i++) {
		cout<<M[i]<<"\t";
	}
}
int bSearch(float M[], int n, float x) {
	int left=0;
	int right=n-1;
	int mid;
	do {
		mid=(left+right)/2;
		if(M[mid]==x) {
			return mid;
		} else if(M[mid]>x) {
			left=mid+1;
		} else {
			right=mid-1;
		}
	} while(left<=right);
	return -1;
}
