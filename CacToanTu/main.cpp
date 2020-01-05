#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x=5;
	int y=3;
	int z=x-- - ++y +2;
	//step 1: ++y==>y=4
	//step 2: 5-4+2=3==>z=3
	//step 3: x--==>x=4
	cout<<"x="<<x<<endl;
	cout<<"y="<<x<<endl;
	cout<<"z="<<z<<endl;
	return 0;
}
