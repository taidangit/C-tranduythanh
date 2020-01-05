#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct DiaChi {
	char TenDuong[255];
	char Quan[150];
	char TinhThanh[150];
};
struct NhanVien {
	int Ma;
	char Ten[255];
	int Tuoi;
	DiaChi CoQuan;
	DiaChi NhaRieng;
};
int main(int argc, char** argv) {
	NhanVien teo;
	teo.Ma=1;
	strcpy(teo.Ten,"Teo");
	teo.Tuoi=23;
	strcpy(teo.CoQuan.TenDuong, "So 1 lac Long Quan");
	strcpy(teo.CoQuan.Quan, "Quan 11");
	strcpy(teo.CoQuan.TinhThanh, "TP.Ho Chi Minh");
	
	strcpy(teo.NhaRieng.TenDuong, "So 2 Au Co");
	strcpy(teo.NhaRieng.Quan, "Quan 11");
	strcpy(teo.NhaRieng.TinhThanh, "TP.Ho Chi Minh");
	
	cout<<"Thong tin cua Teo:\n";
	cout<<"Ma="<<teo.Ma<<",Ten="<<teo.Ten<<",tuoi="<<teo.Tuoi<<endl;
	cout<<"Dia chi:"<<teo.CoQuan.TenDuong<<","<<teo.CoQuan.Quan<<","<<teo.CoQuan.TinhThanh<<endl;
	
	NhanVien *pTy;
	pTy=new NhanVien;
	strcpy(pTy->Ten,"Ty");
	strcpy(pTy->NhaRieng.TinhThanh,"Ha Noi");
	cout<<pTy->Ten<<","<<pTy->NhaRieng.TinhThanh<<endl;
	return 0;
}
