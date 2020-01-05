#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a=20,b=15;
	int *pa,*pb,temp;
	pa=&a;
	pb=&b;
	temp=*pa;
	*pa=*pb;
	*pb=temp;
	cout<<"a="<<a<<", b="<<b<<endl;
	cout<<"Dia chi cua con tro pa="<<pa<<endl;
	pa++;
	cout<<"Dia chi cua con tro pa="<<pa<<endl;
	return 0;
}
