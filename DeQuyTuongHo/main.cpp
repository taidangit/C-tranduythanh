#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool isEvenn(int n);
bool isOdd(int n);

int main(int argc, char** argv) {
	int n1=9;
	bool kq=isEvenn(n1);
	if(kq) {
		cout<<n1<<" la so chan"<<endl;
	} else {
		cout<<n1<<" la so le"<<endl;
	}
	return 0;
}
bool isEvenn(int n) {
	if(n==0) return true;
	else return isOdd(n-1);
}
bool isOdd(int n) {
	return !isEvenn(n);
}
