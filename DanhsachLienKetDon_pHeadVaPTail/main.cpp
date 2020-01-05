#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Node {
	int data;
	Node *pNext;
};
struct SingleList {
	Node *pHead;
	Node *pTail;
};
void Initialize(SingleList &list) {
	list.pHead=list.pTail=NULL;
}
void PrintList(SingleList list) {
	Node *pTmp=list.pHead;
	if(pTmp==NULL) {
		cout<<"Danh sach rong!"<<endl;
		return;
	}
	while(pTmp!=NULL) {
		cout<<pTmp->data<<"\t";
		pTmp=pTmp->pNext;
	}
}
int SizeOfList(SingleList list) {
	Node *pTmp=list.pHead;
	int nSize=0;
	while(pTmp!=NULL) {
		pTmp=pTmp->pNext;
		nSize++;
	}
	return nSize;
}
Node *CreateNode(int d) {
	Node *pNode =new Node;
	if(pNode==NULL) {
		cout<<"Cap phat bo nho that bai!"<<endl;
	} else {
		pNode->data=d;
		pNode->pNext=NULL;
	}
	return pNode;
}
void InsertFirst(SingleList &list, int d) {
	Node *pNode=CreateNode(d);
	if(list.pHead==NULL) {
		list.pHead=list.pTail=pNode;
	} else {
		pNode->pNext=list.pHead;
		list.pHead=pNode;
	}
}
void InsertLast(SingleList &list, int d) {
	Node *pNode =CreateNode(d);
	if(list.pTail==NULL) {
		list.pHead=list.pTail=pNode;
	} else {
		list.pTail->pNext=pNode;
		list.pTail=pNode;
	}
}
void InsertMid(SingleList &list, int pos, int d) {
	if(pos<0 || pos>=SizeOfList(list)) {
		cout<<"Vi tri chen khong hop le!"<<endl;
		return;
	}
	if(pos==0) {
		InsertFirst(list,d);
	} else if(pos==SizeOfList(list)-1) {
		InsertLast(list,d);
	} else {
		Node *pNode=CreateNode(d);
		Node *pIns=list.pHead;
		Node *pPre=NULL;
		int i=0;
		while(pIns!=NULL) {
			if(i==pos) break;
			pPre=pIns;
			pIns=pIns->pNext;
			i++;
		}
		pPre->pNext=pNode;
		pNode->pNext=pIns;
	}
}
void RemoveNode(SingleList &list, int d) {
	Node *pDel=list.pHead;
	if(pDel==NULL) {
		cout<<"Danh sach rong!"<<endl;
	} else {
		Node *pPre=NULL;
		while(pDel!=NULL) {
			if(pDel->data==d) {
				break;
			}
			pPre=pDel;
			pDel=pDel->pNext;
		}
		if(pDel==NULL) {
			cout<<"Khong thay so "<<d<<" de xoa"<<endl;
		} else {
			if(pDel==list.pHead) {
				list.pHead=list.pHead->pNext;
				pDel->pNext=NULL;
				delete pDel;
				pDel=NULL;
			} else if(pDel==list.pTail) {
				list.pTail=pPre;
				pPre->pNext=NULL;
				delete pDel;
				pDel=NULL;
			} else {
				pPre->pNext=pDel->pNext;
				pDel->pNext=NULL;
				delete pDel;
				pDel=NULL;
			}
		}
	}
}
Node *SearchNode(SingleList list, int d) {
	Node *pTmp=list.pHead;
	while(pTmp!=NULL) {
		if(pTmp->data==d) {
			break;
		}
		pTmp=pTmp->pNext;
	}
	return pTmp;
}
void SortNode(SingleList &list) {
	for(Node *pTmp=list.pHead; pTmp!=NULL; pTmp=pTmp->pNext) {
		for(Node *pTmp2=pTmp->pNext; pTmp2!=NULL; pTmp2=pTmp2->pNext){ 
			if(pTmp->data>pTmp2->data) {
				int tmp=pTmp->data;
				pTmp->data=pTmp2->data;
				pTmp2->data=tmp;
			}
		}
	}
}
int main(int argc, char** argv) {
	SingleList list;
	Initialize(list);
	InsertFirst(list,7);
	InsertFirst(list,10);
	InsertLast(list,20);
	InsertFirst(list,5);
	InsertLast(list,30);
	InsertFirst(list,15);
	
	InsertMid(list,3,-15);
	InsertMid(list,0,90);
	InsertMid(list,7,85);
	
	cout<<"\nCac node trong danh sach:\n";
	PrintList(list);
	
	RemoveNode(list,10);
	RemoveNode(list,7);
	cout<<"\nCac node trong danh sach sau khi xoa:\n";
	PrintList(list);
	
	RemoveNode(list,90);
	RemoveNode(list,85);
	cout<<"\nCac node trong danh sach sau khi xoa:\n";
	PrintList(list);
	
	int size=SizeOfList(list);
	cout<<"\nCo "<<size<<" Node trong danh sach"<<endl;
	
	int d;
	cout<<"\nNhap so d:"<<endl;
	cin>>d;
	Node *pSearch=SearchNode(list,d);
	if(pSearch==NULL) {
		cout<<"Khong thay "<<d<<" trong danh sach"<<endl;
	} else {
		cout<<"Thay "<<d<<" trong danh sach"<<endl;
	}
	
	SortNode(list);
	cout<<"\nDanh sach sau khi sort:\n";
	PrintList(list);
	return 0;
}
