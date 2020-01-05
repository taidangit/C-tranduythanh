#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void NhapMaTran(int **&M, int n);
void XuatMaTran(int **M, int n);
int Max(int **M, int n);
int main(int argc, char** argv) {
	int **M;
	int n=5;
	NhapMaTran(M,n);
	cout<<"Ma tran sau khi nhap:\n";
	XuatMaTran(M,n);
	
	int max=Max(M,n);
	cout<<"Max="<<max<<endl;
	return 0;
}
void NhapMaTran(int **&M, int n) {
	srand(time(NULL));
	M=new int*[n];
	for(int i=0;i<n;i++) {
		*(M+i)=new int[n];
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			*(*(M+i)+j)=-50+rand()%151;
		}
	}
}
void XuatMaTran(int **M, int n) {
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cout<<*(*(M+i)+j)<<"\t";
		}
		cout<<endl;
	}
}
int Max(int **M, int n) {
	int max=*(*(M+0)+0);
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			if(max<*(*(M+i)+j)) {
				max=*(*(M+i)+j);
			}
		}
	}
	return max;
}
