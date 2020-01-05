#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char *str=new char[255];
	cout<<"Nhap 1 chuoi:";
	gets(str);
	int n=strlen(str);
	for(int i=0;i<n;i++) {
		char c=*(str+i);
		int ascii=(int) c;
		cout<<c<<"=>"<<ascii<<endl;
		
	}
	return 0;
}
