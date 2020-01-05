#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	srand(time(NULL));
	int n;
	cout<<"Nhap so phan tu n:";
	cin>>n;
	int M[n];
	for(int i=0;i<n;i++) {
		M[i]=rand()%100;
	}
	cout<<"Mang sau khi nhap la:\n";
	for(int i=0;i<n;i++) {
		cout<<M[i]<<"\t";
	}
	
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(M[i]>M[j]) {
				int temp=M[i];
				M[i]=M[j];
				M[j]=temp;
			}
		}
	}
	cout<<"\nMang sau khi sap xep:\n";
		for(int i=0;i<n;i++) {
		cout<<M[i]<<"\t";
	}
	return 0;
}
