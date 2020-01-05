#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien {
	int ma;
	char ten[150];
};
struct Node {
	SinhVien *data;
	Node *pNext;
};
struct SingleList {
	Node *pHead;
};
void Initialize(SingleList *&list) {
	list=new SingleList;
	list->pHead=NULL;
}
SinhVien *NhapSinhVien() {
	SinhVien *sv=new SinhVien;
	cout<<"Nhap ma:";
	cin>>sv->ma;
	cin.ignore();
	cout<<"Nhap ten:";
	gets(sv->ten);
	return sv;
}
Node *CreateNode(SinhVien *sv) {
	Node *pNode=new Node;
	if(pNode!=NULL) {
		pNode->data=sv;
		pNode->pNext=NULL;
	} else {
		cout<<"Cap phat bo phat that bai!"<<endl;
	}
	return pNode;
}
void InsertLast(SingleList *&list, SinhVien *sv) {
	Node *pNode=CreateNode(sv);
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
void PrintList(SingleList *list) {
	Node *pTmp=list->pHead;
	if(pTmp==NULL) {
		cout<<"Danh sach rong!"<<endl;
		return;
	}
	while(pTmp!=NULL) {
		SinhVien *sv=pTmp->data;
		cout<<sv->ma<<"\t"<<sv->ten<<endl;
		pTmp=pTmp->pNext;
	}
}
void SortList(SingleList *&list) {
	for(Node *pTmp=list->pHead; pTmp!=NULL; pTmp=pTmp->pNext) {
		for(Node *pTmp2=pTmp->pNext; pTmp2!=NULL; pTmp2=pTmp2->pNext) {
			SinhVien *svTmp=pTmp->data;
			SinhVien *svTmp2=pTmp2->data;
			if(svTmp2->ma < svTmp->ma) {
				int ma=svTmp->ma;
				char ten[150];
				strcpy(ten, svTmp->ten);
				
				svTmp->ma=svTmp2->ma;
				strcpy(svTmp->ten,svTmp2->ten);
				
				svTmp2->ma=ma;
				strcpy(svTmp2->ten, ten);
			}
		}
	}
}
void RemoveNode(SingleList *&list, int ma) {
	Node *pDel=list->pHead;
	if(pDel==NULL) {
		cout<<"Danh sach rong!"<<endl;
	} else {
		Node *pPre=NULL;
		while(pDel!=NULL) {
			SinhVien *sv=pDel->data;
			if(sv->ma==ma) {
				break;
			}
			pPre=pDel;
			pDel=pDel->pNext;
		}
		if(pDel==NULL) {
			cout<<"Khong thay masv= "<<ma<<" de xoa"<<endl;
		} else {
			if(pDel==list->pHead) {
				list->pHead=list->pHead->pNext;
				pDel->pNext=NULL;
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
int main(int argc, char** argv) {
	SingleList *list;
	Initialize(list);
	SinhVien *teo=NhapSinhVien();
	InsertLast(list,teo);
	SinhVien *ty=NhapSinhVien();
	InsertLast(list,ty);
	SinhVien *bin=NhapSinhVien();
	InsertLast(list,bin);
	cout<<"\nDanh sach sinh vien:\n";
	PrintList(list);
	
	SortList(list);
	cout<<"\nDanh sach sau khi sort:\n";
	PrintList(list);
	
	int ma;
	cout<<"Nhap ma can xoa:\n";
	cin>>ma;
	RemoveNode(list,ma);
	cout<<"\nDanh sach sau khi xoa:\n";
	PrintList(list);
	return 0;
}
