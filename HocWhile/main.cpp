#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	int sum=0;
	int i=1;
	cout<<"Nhap n:";
	cin>>n;
	while(i<=n) {
		sum+=i;
		i++;
	}
	cout<<"1+2+...+"<<n<<"="<<sum<<endl;
	return 0;
}
