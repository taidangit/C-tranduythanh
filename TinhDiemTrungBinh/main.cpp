#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double toan, ly, hoa;
	double dtb;
	cout<<"Chuong trinh tinh diem trung binh"<<endl;
	cout<<"Nhap diem toan:";
	cin>>toan;
	cout<<"Nhap diem ly:";
	cin>>ly;
	cout<<"Nhap diem hoa:";
	cin>>hoa;
	
	dtb=(toan+ly+hoa)/3;
	cout<<"DTB="<<dtb;
	cout<<"\nDTB lam tron="<<setprecision(3)<<dtb<<endl;
	return 0;
}
