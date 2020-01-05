#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"Chuong trinh tinh chu vi, dien tich hinh tron"<<endl;
	double r;
	const double PI=3.14;
	double chuvi, dientich;
	cout<<"Nhap ban kinh:";
	cin>>r;
	chuvi=2*PI*r;
	dientich=PI*r*r;
	cout<<"Chu vi="<<chuvi<<endl;
	cout<<"Dien tich="<<dientich<<endl;
	return 0;
}
