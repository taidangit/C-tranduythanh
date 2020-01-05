#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int canhdoidien;
	int chieucao;
	int chuvi;
	double dientich;
	cout<<"Chuong trinh tinh chu vi, dien tich tam giac"<<endl;
	cout<<"Nhap chieu dai canh doi dien:";
	cin>>canhdoidien;
	cout<<"Nhap chieu cao:";
	cin>>chieucao;
	dientich=0.5*chieucao*canhdoidien;
	cout<<"dien tich="<<dientich<<endl;
	return 0;
}
