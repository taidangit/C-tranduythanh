#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int kwh;
	const int GIA_1=600;
	const int GIA_2=700;
	const int GIA_3=900;
	const int GIA_4=1100;
	int tien;
	cout<<"Nhap so kwh:";
	cin>>kwh;
	if(kwh<=100) {
		tien=kwh*GIA_1;
	} else if(kwh<=150) {
		tien=100*GIA_1+(kwh-100)*GIA_2;
	} else if(kwh<=200) {
		tien=100*GIA_1+50*GIA_2+(kwh-150)*GIA_3;
	} else {
		tien=100*GIA_1+50*GIA_2+50*GIA_3+(kwh-200)*GIA_4;
	}
	cout<<"Tien phai thanh toan="<<tien<<endl;
	return 0;
}
