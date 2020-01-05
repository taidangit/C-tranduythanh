#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Node {
	int data;
	Node *pNext;
};
struct SingleList {
	Node *pHead;
};
void Initialize(SingleList &list) {
	list.pHead=NULL;
}
Node *CreateNode(int d) {
	Node *pNode=new Node;
	if(pNode!=NULL) {
		pNode->data=d;
		pNode->pNext=NULL;
	} else {
		cout<<"Cap phat bo nho that bai!"<<endl;
	}
	return pNode;
}
void PrinList(SingleList list) {
	Node *pTmp=list.pHead;
	if(pTmp==NULL) {
		cout<<"Danh sach rong!";
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
void InsertFirst(SingleList &list, int d) {
	Node *pNode=CreateNode(d);
	if(list.pHead==NULL) {
		list.pHead=pNode;
	} else {
		pNode->pNext=list.pHead;
		list.pHead=pNode;
	}
}
void InsertLast(SingleList &list, int d) {
	Node *pNode=CreateNode(d);
	if(list.pHead==NULL) {
		list.pHead=pNode;
	} else {
		Node *pTmp=list.pHead;
		while(pTmp->pNext!=NULL) {
			pTmp=pTmp->pNext;
		}
		pTmp->pNext=pNode;
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
		pNode->pNext=pIns;
		pPre->pNext=pNode;
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
			cout<<"Khong thay "<<d<<" de xoa"<<endl;
		} else {
			if(pDel==list.pHead) {
				list.pHead=list.pHead->pNext;
				pDel->pNext=NULL;
				delete pDel;
			} else {
				pPre->pNext=pDel->pNext;
				pDel->pNext=NULL;
				delete pDel;
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
void SortList(SingleList &list) {
	for(Node *pTmp=list.pHead; pTmp!=NULL; pTmp=pTmp->pNext) {
		for(Node *pTmp2=pTmp->pNext; pTmp2!=NULL; pTmp2=pTmp2->pNext) {
			if(pTmp2->data<pTmp->data) {
				int tmp=pTmp->data;
				pTmp->data=pTmp2->data;
				pTmp2->data=tmp;
			}
		}
	}
}
void FreMenory(SingleList &list) {
	cout<<"\nBat dau thu hoi bo nho\n";
	while(list.pHead!=NULL) {
		Node *pTmp=list.pHead;
		list.pHead=list.pHead->pNext;
		pTmp->pNext=NULL;
		cout<<"Da xoa so "<<pTmp->data<<"\n";
		delete pTmp;
		pTmp=NULL;
	}
	cout<<"Da xoa thanh cong toan bo danh sach!"<<endl;
}
int main(int argc, char** argv) {
	SingleList list;
	Initialize(list);
	InsertFirst(list,8);
	InsertLast(list,10);
	InsertFirst(list,20);
	InsertMid(list,1,113);
	InsertMid(list,2,118);
	InsertLast(list,22);
	InsertMid(list,1,17);
	PrinList(list);
	cout<<"\nXoa so 20:\n";
	RemoveNode(list,20);
	PrinList(list);
	cout<<"\nXoa so 22:\n";
	RemoveNode(list,22);
	PrinList(list);
	cout<<"\nXoa so 118:\n";
	RemoveNode(list,118);
	PrinList(list);
	int nSize=SizeOfList(list);
	cout<<"\nDanh sach co "<<nSize<<" Node"<<endl;
	
	int d;
	cout<<"\nNhap gia tri can tim:\n";
	cin>>d;
	Node *pSearch=SearchNode(list,d);
	if(pSearch!=NULL) {
		cout<<"Thay "<<d<<endl;
	} else {
		cout<<"Khong thay "<<d<<endl;
	}
	
	SortList(list);
	cout<<"\nDanh sach sau khi sort:\n";
	PrinList(list);
	
	FreMenory(list);
	return 0;
}
