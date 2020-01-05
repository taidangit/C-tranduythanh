#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char str[255];
	cout<<"Nhap 1 chuoi:";
	cin.getline(str,255);
	for(int i=strlen(str)-1;i>=0;i--) {
		cout<<str[i]<<"\t";
	}
	return 0;
}
