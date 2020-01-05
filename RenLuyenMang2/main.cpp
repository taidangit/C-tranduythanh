#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cout<<"Nhap so phan tu n:";
	cin>>n;
	int M[n];
	for(int i=0;i<n;i++) {
		cout<<"M"<<i<<"]=";
		cin>>M[i];
	}
	cout<<"Mang sau khi nhap:\n";
	for(int i=0;i<n;i++) {
		cout<<M[i]<<"\t";
	}
	
	int max=M[0];
	for(int i=1;i<n;i++) {
		if(M[i]>max) {
			max=M[i];
		}
	}
	cout<<"\nMax="<<max<<endl;
	
	int min=M[0];
	for(int i=1;i<n;i++) {
		if(M[i]<min) {
			min=M[i];
		}
	}
	cout<<"\nMin="<<min<<endl;
	
	int sum=0;
	for(int i=0;i<n;i++) {
		sum+=M[i];
	}
	cout<<"Sum="<<sum<<endl;
	return 0;
}
