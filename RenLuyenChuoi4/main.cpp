#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool HoiNamHayNu(char *str) {
	int j=0;
	for(int i=strlen(str)-1;i>=0;i--) {
		if(str[i]==';') {
			j=i;
			break;
		}
	}
	char strSex[5];
	int i2=0;
	for(int i=j+1;i<strlen(str);i++) {
		strSex[i2]=str[i];
		i2++;
	}
	strSex[i2]='\0';
	if(strcmp(strSex,"male")==0) {
		return false;
	} else {
		return true;
	}
}
int main(int argc, char** argv) {
	char **dsSv=new char*[5];
	for(int i=0;i<5;i++) {
		*(dsSv+i)=new char [255];
	}
	strcpy(*(dsSv+0),"sv1;obama;male");
	strcpy(*(dsSv+1),"sv2;yanjmaa;female");
	strcpy(*(dsSv+2),"sv3;trump;male");
	strcpy(*(dsSv+3),"sv4;putin;male");
	strcpy(*(dsSv+4),"sv5;perira;female");
	int soNam=0;
	int soNu=0;
	for(int i=0;i<5;i++) {
		cout<<*(dsSv+i)<<endl;
		bool kq=HoiNamHayNu(*(dsSv+i));
		if(!kq) {
			soNam++;
		} else {
			soNu++;
		}
	}
	
	cout<<"Co "<<soNam<<" sinh vien nam trong danh sach"<<endl;
	cout<<"Co "<<soNu<<" sinh vien nu trong danh sach"<<endl;
	return 0;
}
