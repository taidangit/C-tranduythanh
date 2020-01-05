#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void LuuFile(int number);
int main(int argc, char** argv) {
	while(true) {
		cout<<"Nhap so:";
		int number;
		cin>>number;
		LuuFile(number);
		char h;
		cout<<"Nhap tiep ko(c/k)?:";
		cin>>h;
		if(h=='k') break;
	}
	cout<<"Ban da nhap xong!"<<endl;
	
	FILE * file=fopen("csdl.txt","r");
	int MChan[1000];
	int iChan=0;
	int MLe[1000];
	int iLe=0;
	int MAm[1000];
	int iAm=0;
	while(true) {
		char *line="\0";
		char buf[5];
		line=fgets(buf,5,file);
		if(line!=NULL) {
			int number=atoi(line);
			//cout<<number<<endl;
			if(number%2==0 && number >0) {
				MChan[iChan++]=number;
			}
			if(number%2!=0 && number >0) {
				MLe[iLe++]=number;
			}
			if(number <0) {
				MAm[iAm++]=number;
			}
		} else {
			break;
		}
	}
	fclose(file);
	cout<<"\nCac so chan:\n";
	for(int i=0;i<iChan;i++) {
		cout<<MChan[i]<<"\t";
	}
	cout<<"\nCac so le:\n";
	for(int i=0;i<iLe;i++) {
		cout<<MLe[i]<<"\t";
	}
	cout<<"\nCac so am:\n";
	for(int i=0;i<iAm;i++) {
		cout<<MAm[i]<<"\t";
	}
	return 0;
}
void LuuFile(int number) {
	FILE * file=fopen("csdl.txt","a");
	char str[5];
	itoa(number,str,10);
	fputs(str,file);
	fputs("\n",file);
	fclose(file);
}
