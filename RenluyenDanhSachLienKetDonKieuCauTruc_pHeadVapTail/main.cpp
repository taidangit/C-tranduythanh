#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct PhanSo {
	int tu;
	int mau;
};
struct Node {
	PhanSo *data;
	Node *pNext;
};
struct SingleList {
	Node *pHead;
	Node *pTail;
};
void Initialize(SingleList *&list) {
	list=new SingleList;
	list->pHead=list->pTail;
}
Node *CreateNode(int tu, int mau) {
	Node *pNode=new Node;
	if(pNode==NULL) {
		cout<<"Loi cap phat bo nho"<<endl;
	} else {
		PhanSo *ps=new PhanSo;
		ps->tu=tu;
		ps->mau=mau;
		pNode->data=ps;
		pNode->pNext=NULL;
	}
	return pNode;
}
void InsertLast(SingleList *&list, int tu, int mau) {
	Node *pNode=CreateNode(tu,mau);
	if(list->pTail==NULL) {
		list->pHead=list->pTail=pNode;
	} else {
		list->pTail->pNext=pNode;
		list->pTail=pNode;
	}
}
void Printlist(SingleList *list) {
	Node *pTmp=list->pHead;
	while(pTmp!=NULL) {
		PhanSo *ps=pTmp->data;
		if(pTmp->pNext!=NULL) {
			cout<<ps->tu<<"/"<<ps->mau<<"+";
		} else {
			cout<<ps->tu<<"/"<<ps->mau;
		}
		pTmp=pTmp->pNext;
	}
}
int GiaiThua(int n) {
	if(n<=1) return 1;
	return n*GiaiThua(n-1);
}
double SumOfList(SingleList *list) {
	double sum=0;
	Node *pTmp=list->pHead;
	while(pTmp!=NULL) {
		PhanSo *ps=pTmp->data;
		sum+=ps->tu*1.0/ps->mau;
		pTmp=pTmp->pNext;
	}
	return sum;
}
int main(int argc, char** argv) {
	SingleList *list;
	Initialize(list);
	int n,x;
	cout<<"Nhap n:";
	cin>>n;
	cout<<"Nhap x:";
	cin>>x;
	for(int i=1;i<=n;i++) {
		int tu=pow(x,i);
		int mau=GiaiThua(i);
		InsertLast(list,tu,mau);
	}
	cout<<"\nDanh sach sau khi nhap:\n";
	Printlist(list);
	
	double sum=SumOfList(list);
	cout<<"\nTong="<<sum<<endl;
	return 0;
}
