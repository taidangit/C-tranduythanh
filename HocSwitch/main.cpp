#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cout<<"Nhap n:";
	cin>>n;
	int sodu=n%2;
	/*if(sodu==0) {
		cout<<n<<" la so chan"<<endl;
	} else {
		cout<<n<<" la so le"<<endl;
	}*/
	
	switch(sodu) {
		case 0:
			cout<<n<<" la so chan"<<endl;
			break;
		case 1:
			cout<<n<<" la so le"<<endl;
			break;
		default:
			cout<<"Ban nhap sai gia tri"<<endl;
			break;
	}
	
	int x=19;
	switch(x) {
		case 1:
		case 2:
		case 3:
			cout<<"xyz";
			break;
		case 4:
		case 9:
			cout<<"w";
			break;
		default:
			cout<<"chua ho tro";
			break;
	}
	return 0;
}
