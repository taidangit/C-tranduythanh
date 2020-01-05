#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	while(true) {
		cout<<"Chuong trinh choi game doan so\n";
		srand(time(NULL));
		int soMay=1+rand()%100;
		int soLanDoan=0;
		bool isWin=false;
		while(true) {
			cout<<"May da ra 1 so [1..100], moi ban doan:";
			int soNguoi;
			cin>>soNguoi;
			soLanDoan++;
			cout<<"Ban doan lan thu "<<soLanDoan<<endl;
			if(soNguoi==soMay) {
				cout<<"Ban doan trung roi, so may = "<<soMay<<endl;
				isWin=true;
				break;
			} else if(soNguoi>soMay) {
				cout<<"Ban doan sai roi, so ban > so may"<<endl;
			} else {
				cout<<"Ban doan sai roi, so ban < so may"<<endl;
			}
			if(soLanDoan==7) {
				break;
			}	
		}
		if(!isWin) {
			cout<<"Game Over!"<<endl;
			cout<<"So may="<<soMay<<endl;
		}
		cout<<"Choi tiep ko(c/k)?:";
		char c;
		cin>>c;
		if(c=='k') {
			break;
		}
	}
	cout<<"Good Bye!"<<endl;
	return 0;
}
