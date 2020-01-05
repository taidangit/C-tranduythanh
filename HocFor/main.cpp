#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i, n, sum=0;
	cout<<"Nhap n:";
	cin>>n;
	for(i=1;i<=n;i++) {
		sum+=i;
	}
	cout<<"1+2+...+"<<n<<"="<<sum<<endl;
	return 0;
}
