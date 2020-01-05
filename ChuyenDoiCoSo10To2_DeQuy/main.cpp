#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void H10ToH2(int n) {
	if(n>0) {
		int sodu=n%2;
		n/=2;
		H10ToH2(n);
		cout<<sodu;
	}
}
int main(int argc, char** argv) {
	int n=13;
	H10ToH2(n);
	return 0;
}
