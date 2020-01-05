#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap(double *&pa, double *&pb);
int main(int argc, char** argv) {
	double a=5.5;
	double b=6.5;
	swap(a,b);
	cout<<"a="<<a<<";b="<<b<<endl;
	return 0;
}
void swap(double *&pa, double *&pb) {
	double temp=*pa;
	*pa=*pb;
	*pb=temp;
}
