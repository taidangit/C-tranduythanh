#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char str1[25],str2[25];
	strcpy(str1,"obama");
	strcpy(str2,"obama");
	int kq=strcmp(str1,str2);
	cout<<"Ket qua="<<kq<<endl;
	if(kq==0) {
		cout<<"s1=s2"<<endl;
	} else if(kq<0) {
		cout<<"s1<s2"<<endl;
	} else {
		cout<<"s1>s2"<<endl;
	}
	
	char str3[25],str4[25];
	strcpy(str3,"Cha me thoi doi an o bac");
	strcpy(str4,"Co chong ho hung cung nhu khong");
	int kq2=strncmp(str3,str4,1);
	if(kq2==0) {
		cout<<"s3=s4"<<endl;
	} else if(kq2>0) {
		cout<<"s3>s4"<<endl;
	} else {
		cout<<"s3<s4"<<endl;
	}
	return 0;
}
