#include <iostream>
#include <string.h>
using namespace std;
/* run this program 
using the console pauser or add your own getch, system("pause") or input loop */
struct DiaChi {
	char SoNha[25];
	char TenDuong[250];
	char Quan[25];
	char TinhThanh[25];
};
struct SinhVien {
	char MaSV[10];
	char TenSV[255];
	bool GioiTinh;
	DiaChi DiaChiNha;
	DiaChi DiaChiTruong;
}teo,ty;
int main(int argc, char** argv) {
	strcpy(teo.TenSV,"Nguyen Van Teo");
	teo.GioiTinh=false;
	strcpy(teo.MaSV,"SV113");
	cout<<"===========================================\n";
	cout<<"Ma="<<teo.MaSV<<endl;
	cout<<"Ten="<<teo.TenSV<<endl;
	cout<<"Gioi tinh="<<(teo.GioiTinh==true?"Nu":"Nam")<<endl;
	
	SinhVien bin;
	strcpy(bin.TenSV,"Pham Bin Bin");
	cout<<"Ten cua bin="<<bin.TenSV<<endl;
	return 0;
}
