#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double a, b,c;
	cout<<"PT Bac 2:ax^2+bx+c=0\n";
	cout<<"Nhap he so a:";
	cin>>a;
	cout<<"Nhap he so b:";
	cin>>b;
	cout<<"Nhap he so c:";
	cin>>c;
	if(a==0) {
		if(b==0 && b==0) {
			cout<<"PT vo so nghiem"<<endl;
		} else if(b==0 && c!=0) {
			cout<<"PT vo nghiem"<<endl;
		} else {
			double x=-c/b;
			cout<<"PT co 1 nghiem x="<<x<<endl;
		}
	} else {
		double delta=pow(b,2)-4*a*c;
		if(delta<0) {
			cout<<"PT vo nghiem"<<endl;
		} else if(delta==0) {
			double x=-b/(2*a);
			cout<<"PT co nghiem kep x1=x2="<<x<<endl;
		} else {
			double x1=(-b-sqrt(delta))/(2*a);
			double x2=(-b+sqrt(delta))/(2*a);
			cout<<"PT co 2 nghiem x1="<<x1<<",x2="<<x2<<endl;
		}
	}
	return 0;
}
