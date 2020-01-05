#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double toan, van, dtb;
	cout<<"Nhap diem toan:";
	cin>>toan;
	cout<<"Nhap diem van:";
	cin>>van;
	dtb=(toan*2+van)/3;
	cout<<"DTB="<<dtb;
	return 0;
}
