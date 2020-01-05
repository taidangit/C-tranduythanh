#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char str1[]="OBAMA hahaha ali333";
	int n1=strlen(str1);
	for(int i=0;i<n1;i++) {
		char c=str1[i];
		putchar(toupper(c));
	}
	cout<<endl;
	char str2[]="OBAMA HAHAHA ALI333";
	int n2=strlen(str2);
	for(int i=0;i<n2;i++) {
		char c=str2[i];
		putchar(tolower(c));
	}
	return 0;
}
