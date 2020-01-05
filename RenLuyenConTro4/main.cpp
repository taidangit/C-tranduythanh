#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void NhapMaTran(int **&M, int n);
void XuatMaTran(int **M, int n);
int **CongMaTran(int **M1, int **M2, int n);
int main(int argc, char** argv) {
	srand(time(NULL));
	int **M1, **M2;
	int n=3;
	NhapMaTran(M1,n);
	NhapMaTran(M2,n);
	cout<<"Ma tran M1:\n";
	XuatMaTran(M1,n);
	cout<<"\nMa tran M2:\n";
	XuatMaTran(M2,n);
	
	int **M3=CongMaTran(M1,M2,n);
	cout<<"\nMa tran 3:\n";
	XuatMaTran(M3,n);
	return 0;
}
void NhapMaTran(int **&M, int n) {
	M=new int*[n];
	for(int i=0;i<n;i++) {
		*(M+i)=new int[n];
	}
	for(int i=0; i<n;i++) {
		for(int j=0;j<n;j++) {
			*(*(M+i)+j)=rand()%10;
		}
	}
}
void XuatMaTran(int **M, int n) {
	for(int i=0; i<n;i++) {
		for(int j=0;j<n;j++) {
			cout<<*(*(M+i)+j)<<"\t";
		}
		cout<<endl;
	}
}
int **CongMaTran(int **M1, int **M2, int n) {
	int **M3=new int*[n];
	for(int i=0;i<n;i++) {
		*(M3+i)=new int[n];
	}
	
	for(int i=0; i<n;i++) {
		for(int j=0;j<n;j++) {
			*(*(M3+i)+j)=*(*(M1+i)+j)+*(*(M2+i)+j);
		}
	}
	return M3;
}
