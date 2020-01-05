#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int *p;
	p=new int;//cap phat bo nho cho con tro p
	*p=100;//gan gia tri 100 tai o nho ma p dang tro toi
	cout<<"Dia chhi tai con tro p="<<p<<endl;
	cout<<"Gia tri tai dia chi ma con tro p tro toi="<<*p<<endl;
	delete p;//bi loi menory leak neu kho thu hoi bo nho
	return 0;
}
