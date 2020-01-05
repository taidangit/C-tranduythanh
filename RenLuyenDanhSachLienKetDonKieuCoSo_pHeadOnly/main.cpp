#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Node {
	float data;
	Node *pNext;
};
struct SingleList {
	Node *pHead;
};
void Initialize(SingleList *&list) {
	list=new SingleList;
	list->pHead=NULL;
}
Node *CreateNode(float d) {
	Node *pNode =new Node;
	if(pNode!=NULL) {
		pNode->data=d;
		pNode->pNext=NULL;
	} else {
		cout<<"Cap phat bo nho that bai!"<<endl;
	}
	return pNode;
}
void PrintList(SingleList *list) {
	Node *pTmp=list->pHead;
	if(pTmp==NULL) {
		cout<<"Danh sach rong!"<<endl;
		return;
	}
	while(pTmp!=NULL) {
		cout<<pTmp->data<<"\t";
		pTmp=pTmp->pNext;
	}
}
int SizeOfList(SingleList *list) {
	Node *pTmp=list->pHead;
	int nSize=0;
	while(pTmp!=NULL) {
		pTmp=pTmp->pNext;
		nSize++;
	}
	return nSize++;
}
void InsertFirst(SingleList *&list, float d) {
	Node *pNode=CreateNode(d);
	if(list->pHead==NULL) {
		list->pHead=pNode;
	} else {
		pNode->pNext=list->pHead;
		list->pHead=pNode;
	}
}
void InsertLast(SingleList *&list, float d) {
	Node *pNode =CreateNode(d);
	if(list->pHead==NULL) {
		list->pHead=pNode;
	} else {
		Node *pTmp=list->pHead;
		while(pTmp->pNext!=NULL) {
			pTmp=pTmp->pNext;
		}
		pTmp->pNext=pNode;
	}
}
void InsertMid(SingleList *&list, int pos, float d) {
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
		Node *pIns=list->pHead;
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
float SumOfList(SingleList *list) {
	Node *pTmp=list->pHead;
	float sum=0;
	while(pTmp!=NULL) {
		sum+=pTmp->data;
		pTmp=pTmp->pNext;
	}
	return sum;
}
Node *SearchNode(SingleList *list, float d) {
	Node *pTmp=list->pHead;
	while(pTmp!=NULL) {
		if(pTmp->data==d) {
			break;
		}
		pTmp=pTmp->pNext;
	}
	return pTmp;
}
void SortList(SingleList *&list) {
	for(Node *pTmp=list->pHead; pTmp!=NULL; pTmp=pTmp->pNext) {
		for(Node *pTmp2=pTmp->pNext; pTmp2!=NULL; pTmp2=pTmp2->pNext) {
			if(pTmp2->data<pTmp->data) {
				float tmp=pTmp->data;
				pTmp->data=pTmp2->data;
				pTmp2->data=tmp;
			}
		}
	}
}
void RemoveNode(SingleList *&list, float d) {
	Node *pDel=list->pHead;
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
			if(pDel==list->pHead) {
				list->pHead=list->pHead->pNext;
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
int main(int argc, char** argv) {
	SingleList *list;
	Initialize(list);
	InsertFirst(list,5.5);
	InsertLast(list,7.2);
	InsertFirst(list,10.7);
	InsertMid(list,1,15.5);
	PrintList(list);
	
	SortList(list);
	cout<<"\nDanh sach sau khi sort:\n";
	PrintList(list);
	
	float sum=SumOfList(list);
	cout<<"\nTong="<<sum<<endl;
	
	float f;
	cout<<"\nNhap so can tim:\n";
	cin>>f;
	Node *pSearch=SearchNode(list,f);
	if(pSearch==NULL) {
		cout<<"Khong thay "<<f<<endl;
	} else {
		cout<<"Thay "<<f<<endl;
	}
	float f1;
	cout<<"Nhap so muon xoa:\n";
	cin>>f1;
	RemoveNode(list,f1);
	cout<<"\nDanh sach sau khi xoa:\n";
	PrintList(list); 
	return 0;
}
