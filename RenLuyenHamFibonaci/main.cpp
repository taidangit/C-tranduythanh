#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fib(int n);
void XuatDayFib(int n);
int main(int argc, char** argv) {
	int n=8;
	cout<<fib(n);
	cout<<"\nDay so Fibonaci:\n";
	XuatDayFib(n);
	return 0;
}
int fib(int n) {
	if(n<=2) {
		return 1;
	}
	return fib(n-1)+fib(n-2);
}
void XuatDayFib(int n) {
	for(int i=1;i<=n;i++) {
		cout<<fib(i)<<"\t";
	}
}
