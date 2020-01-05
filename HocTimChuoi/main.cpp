#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char str1[25];
	strcpy(str1,"Obama hahaha ali333");
	char *p=strchr(str1,'l');
	if(p!=NULL) {
		cout<<"Tim thay 'l' o vi tri ="<<p-str1<<endl;
	} else {
		cout<<"Khong tim thay 'l' trong chuoi"<<endl;
	}
	
	
	char str2[250];
	strcpy(str2,"Quanh nam buon ban o mon song, bat ca o song");
	char *p2=strstr(str2,"song");
	if(p2==NULL) {
		cout<<"Khong thay 'song' trong chuoi"<<endl;
	} else {
		cout<<"Thay song o vi tri thu "<<p2-str2<<endl;
	}
	return 0;
}
