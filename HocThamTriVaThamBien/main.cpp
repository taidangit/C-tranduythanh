#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Ham1(int x);
void Ham2(int &x);
int main(int argc, char** argv) {
	int x=5;
	cout<<"x truoc khi vao ham 1 ="<<x<<endl;
	Ham1(x);
	cout<<"x sau khi vao ham 1 ="<<x<<endl;
	
	x=5;
	cout<<"x truoc khi vao ham 2="<<x<<endl;
	Ham2(x);
	cout<<"x sau khi vao ham 2 ="<<x<<endl;
	return 0;
}
void Ham1(int x) {
	x=10;
	cout<<"x trong ham 1="<<x<<endl;
}
void Ham2(int &x) {
	x=10;
	cout<<"x trong ham 2="<<x<<endl;
}
