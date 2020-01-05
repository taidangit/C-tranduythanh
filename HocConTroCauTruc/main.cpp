#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien {
	int ma; 
	char ten[255];
};

int main(int argc, char** argv) {
	SinhVien teo;
	teo.ma=113;
	strcpy(teo.ten,"Teo");
	cout<<"Thong tin cua Teo:\n";
	cout<<teo.ma<<"\t"<<teo.ten<<endl;
	
	SinhVien *pTeo=&teo;
	cout<<"Thong tin cua Teo theo con tro:\n";
	cout<<pTeo->ma<<"\t"<<pTeo->ten<<endl;
	
	pTeo->ma=103;
	strcpy(pTeo->ten,"Teo 2");
	cout<<"Thong tin cua Teo sau khi con tro thay doi gia tri:\n";
	cout<<teo.ma<<"\t"<<teo.ten<<endl;
	
	teo.ma=203;
	strcpy(teo.ten,"Teo 203");
	cout<<"Thong tin cua Teo theo con tro:\n";
	cout<<pTeo->ma<<"\t"<<pTeo->ten<<endl;
	
	
	SinhVien *pTy;
	pTy=new SinhVien;
	pTy->ma=114;
	strcpy(pTy->ten,"Ty");
	cout<<"\nThong tin cua Ty:\n";
	cout<<pTy->ma<<"\t"<<pTy->ten<<endl;
	
	SinhVien *pTy2=pTy;
	pTy2->ma=214;
	cout<<"Thong tin cua pTy sau khi pTy2 doi:\n";
	cout<<pTy->ma<<"\t"<<pTy->ten<<endl;
	return 0;
}
