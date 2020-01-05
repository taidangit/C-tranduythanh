#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Node {
	int x;
	int i;
	Node *pNext;
};
struct SingleList {
	Node *pHead;
	Node *pTail;
};
void Initialize(SingleList *&list) {
	list=new SingleList;
	list->pHead=list->pTail=NULL;
}
Node *CreateNode(int x, int i) {
	Node *pNode=new Node;
	if(pNode==NULL) {
		cout<<"Loi cap phat bo nho"<<endl;
	} else {
		pNode->i=i;
		pNode->x=x;
		pNode->pNext=NULL;
	}
	return pNode;
}
void InsertLast(SingleList *&list, int x, int i) {
	Node *pNode=CreateNode(x,i);
	if(list->pTail==NULL) {
		list->pHead=list->pTail=pNode;
	} else {
		list->pTail->pNext=pNode;
		list->pTail=pNode;
	}
	
}
void PrintList(SingleList *list) {
	Node *pTmp=list->pHead;
	while(pTmp!=NULL) {
		if(pTmp->pNext!=NULL) {
			cout<<pTmp->x<<"^"<<pTmp->i<<"+";
		} else {
			cout<<pTmp->x<<"^"<<pTmp->i;
		}
	
		pTmp=pTmp->pNext;
	}
}
double  SumOfList(SingleList *list) {
	double sum=0;
	Node *pTmp=list->pHead;
	while(pTmp!=NULL) {
		sum+=pow(pTmp->x,pTmp->i);
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
		InsertLast(list,x,i);
	}
	cout<<"Day so sau khi tao thanh danh sach:\n";
	PrintList(list);
	
	double sum=SumOfList(list);
	cout<<"\nTong="<<sum<<endl;
	return 0;
}
