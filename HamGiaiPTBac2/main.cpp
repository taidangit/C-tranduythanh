#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void ptb2(int a, int b, int c);
int main(int argc, char** argv) {
	ptb2(0,-4,3);
	return 0;
}
void ptb2(int a, int b, int c) {
	if(a==0) {
		if(b==0 && c==0) {
			cout<<"PT vo so nghiem"<<endl;
		} else if( b==0 & c!=0) {
			cout<<"PT vo nghiem"<<endl;
		} else {
			cout<<"PT co nghiem x="<<(-c*1.0/b)<<endl;
		}
	} else {
		double delta =pow(b, 2)-4*a*c;
		if(delta<0) {
			cout<<"PT vo nghiem"<<endl;
		} else if(delta==0) {
			double x=-b/(2*a);
			cout<<"PT co nghiem kep x1=x2="<<x<<endl;
		} else {
			double x1=(-b-sqrt(delta))/(2*a);
			double x2=(-b+sqrt(delta))/(2*a);
			cout<<"PT co 2 nghiem phan biet x1="<<x1<<", x2="<<x2<<endl;
		}
	}
}
