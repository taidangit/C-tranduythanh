#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	srand(time(NULL));
	int row, col;
	cout<<"Nhap so dong:";
	cin>>row;
	cout<<"Nhap so cot:";
	cin>>col;
	int M[row][col];
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {
			M[i][j]=rand()%100;
		}
	}
	cout<<"Mang sau khi nhap:\n";
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {
			cout<<M[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"Nhap dong:";
	int r;
	cin>>r;
	for(int j=0;j<col;j++) {
		cout<<M[r][j]<<"\t";
	}
	
	cout<<"\nNhap cot:";
	int c;
	cin>>c;
	for(int i=0;i<row;i++) {
		cout<<M[i][c]<<"\t";
	}
	
	if(row==col) {
		cout<<"\nDuong cheo chinh:\n";
		for(int i=0;i<row;i++) {
			cout<<M[i][i]<<"\t";
		}
		cout<<"\nDuong cheo phu:\n";
		for(int i=0;i<row;i++) {
			cout<<M[i][row-i-1]<<"\t";
		}
	}
	
	
	return 0;
}
