#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a=5;
	float f=5.5;
	int *pa=&a;
	float *pf=&f;
	void *p;
	p=&a;
	(*(int*)p)=10;
	
	cout<<"a="<<a<<endl;
	p=&f;
	(*(float*)p)=20.5;
	cout<<"f="<<f;
	
	int *y=&a;
	cout<<"gia tri cua o nho ma y quan ly="<<*y<<endl;
	return 0;
}
