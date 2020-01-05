#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Book {
	char title[50];
	char author[50];
	int pages;
	double price;
};
int main(int argc, char** argv) {
	Book b;
	cout<<"Nhap ten sach:";
	gets(b.title);
	cout<<"Nhap tac gia:";
	gets(b.author);
	cout<<"Nhap so trang:";
	cin>>b.pages;
	cout<<"Nhap gia:";
	cin>>b.price;
	
	Book a=b;
	cout<<"Ten sach="<<a.title<<endl;
	cout<<"Tac gia:"<<a.author<<endl;
	cout<<"So trang:"<<a.pages<<endl;
	cout<<"Gia:"<<a.price<<endl;
	
	a.price=999;
	cout<<"Gia cua b.price="<<b.price<<endl;
	return 0;
}
