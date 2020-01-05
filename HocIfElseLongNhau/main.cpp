#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"Xem diem trung binh\n";
	cout<<"Nhap diem trung binh:";
	double dtb;
	cin>>dtb;
	if(dtb<0 || dtb>10) {
		cout<<"Diem ban nhap khong hop le"<<endl;
	} else {
		if(dtb>=5) {
			cout<<"Ban dau"<<endl;
		} else {
			cout<<"Ban rot"<<endl;
		}
	}
	return 0;
}
