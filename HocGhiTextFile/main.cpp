#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void LuuTextFile() {
	FILE *file=fopen("csdl.txt","w");
	fputs("sv01;Nguyen Van Teo;1/1/1998\n", file);
	fputs("sv02;Tran Hanh Phuc;2/3/1997\n", file);
	fputs("sv03;Pham Hong An;5/7/1996\n", file);
	fclose(file);
}
void DocTextFile() {
	FILE *file=fopen("csdl.txt", "r");
	char *s="\0";
	do {
		char line[150];
		s=fgets(line,150,file);
		if(s==NULL) break;
		cout<<s<<endl;
	} while(true);
	fclose(file);
}
int main(int argc, char** argv) {
	DocTextFile();
	return 0;
}
