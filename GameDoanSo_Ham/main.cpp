#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void play();
int main(int argc, char** argv) {
	srand(time(NULL));
	while(true) {
		play();
		char c;
		cout<<"Choi tiep ko ban(c/k)?:";
		cin>>c;
		if(c=='k'){
			break;
		}
	}
	cout<<"Bye Bye!";
	return 0;
}
void play() {
	int soMay=1+rand()%100;
	int soLanDoan=0;
	int soNguoi;
	do {
		cout<<"May da ra 1 so [1..100], moi ban doan:";
		cin>>soNguoi;
		soLanDoan++;
		cout<<"Ban doan lan thu "<<soLanDoan<<endl;
		if(soNguoi==soMay) {
			cout<<"Ban da doan trung, so may="<<soMay<<endl;
			break;
		} else if(soNguoi<soMay) {
			cout<<"Ban doan sai, so ban < so may"<<endl;
		} else {
			cout<<"Ban doan sai, so ban < so may"<<endl;
		}
		if(soLanDoan==7) {
			cout<<"Game Over!, so may="<<soMay<<endl;
			break;
		}
	} while(true);
}
