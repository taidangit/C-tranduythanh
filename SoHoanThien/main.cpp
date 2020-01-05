#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cout<<"Nhap n:";
	cin>>n;
	int sum=0;
	int i=1;
	while(i<n) {
		if(n%i==0) {
			sum+=i;
		}
		i++;
	}
	if(sum==n) {
		cout<<n<<" la so hoan thien"<<endl;
	} else {
		cout<<n<<" khong la so hoan thien"<<endl;
	}
	return 0;
}
