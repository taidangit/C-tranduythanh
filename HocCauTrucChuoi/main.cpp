#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char *str="Hello";
	cout<<str<<endl;
	
	char str2[]="Obama";
	cout<<str2<<endl;
	
	char str3[]={'K','I','M','\0'};
	cout<<str3<<endl;
	
	char str4[10];
	//str4="Putin";
	str4[0]='P';
	str4[1]='U';
	str4[2]='T';
	str4[3]='I';
	str4[4]='N';
	cout<<str4<<endl;
	return 0;
}
