#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void NhapMang(int M[], int n);
void XuatMang(int M[], int n);
void BubbleSort(int M[], int n);
void InsertionSort(int M[], int n);
void SelectionSort(int M[], int n);
void InterchangeSort(int M[], int n);
void QuickSort(int M[], int left, int right);
void MergeSort(int M[], int left, int right);
void menu();

int *M;
int n;

int main(int argc, char** argv) {
	while(true) {
		menu();
	}
	
	return 0;
}
void menu() {
	cout<<"\nMoi ban chon chuc nang:\n";
	cout<<"1.Nhap mang\n";
	cout<<"2.Xuat mang\n";
	cout<<"3.Bubble Sort\n";
	cout<<"4.Insertion Sort\n";
	cout<<"5.Selection Sort\n";
	cout<<"6.Interchange Sort\n";
	cout<<"7.Quick Sort\n";
	cout<<"8.Merge Sort\n";
	cout<<"9.Thoat\n";
	int chon;
	cout<<"Ban chon [1..9]:";
	cin>>chon;
	switch(chon) {
		case 1:
			cout<<"Nhap n:";
			cin>>n;
			if(M!=NULL) {
				delete M;
				M=NULL;
			}
			M=new int[n];
			NhapMang(M,n);
			break;
		case 2:
			cout<<"Cac phan tu trong mang:\n";
			XuatMang(M,n);
			break;
		case 3:
			cout<<"\nBubble sort duoc goi:\n";
			BubbleSort(M,n);
			XuatMang(M,n);
			break;
		case 4:
			cout<<"\nInsertion Sort duoc goi:\n";
			InsertionSort(M,n);
			XuatMang(M,n);
			break;
		case 5:
			cout<"\nSelection sort duoc goi:\n";
			SelectionSort(M,n);
			XuatMang(M,n);
		case 6:
			cout<<"\nInterchange duoc goi:\n";
			InterchangeSort(M,n);
			XuatMang(M,n);
			break;
		case 7:
			cout<<"\nQuick sort duoc goi:\n";
			QuickSort(M,0,n-1);
			XuatMang(M,n);
			break;
		case 8:
			cout<<"\nMerge sort duoc goi:\n";
			MergeSort(M,0,n-1);
			XuatMang(M,n);
			break;
			
		case 9:
			exit(0);
	}
	
}
void NhapMang(int M[], int n) {
	srand(time(NULL));
	for(int i=0;i<n;i++) {
		M[i]=rand()%100;
	}
}
void XuatMang(int M[], int n) {
	for(int i=0;i<n;i++) {
		cout<<M[i]<<"\t";
	}
}
void BubbleSort(int M[], int n) {
	for(int i=0;i<n-1;i++) {
		for(int j=n-1;j>i;j--) {
			if(M[j]<M[j-1]) {
				int temp=M[j];
				M[j]=M[j-1];
				M[j-1]=M[j];
			}
		}
	}
}
void InsertionSort(int M[], int n) {
	int pos=0;
	int x;
	for(int i=1;i<n;i++) {
		x=M[i];
		for(pos=i;(pos>0 && M[pos-1]>x);pos--) {
			M[pos]=M[pos-1];
		}
		M[pos]=x;
	}
}
void SelectionSort(int M[], int n) {
	int min;
	for(int i=0;i<n-1;i++) {
		min=i;
		for(int j=i+1;j<n;j++) {
			if(M[j]<M[min]) {
				min=j;
			}
		}
		if(min!=i) {
			int temp=M[i];
			M[i]=M[min];
			M[min]=temp;
		}
	}
}
void InterchangeSort(int M[], int n) {
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(M[i]>M[j]) {
				int temp=M[i];
				M[i]=M[j];
				M[j]=temp;
			}
		}
	}
}
void QuickSort(int M[], int left, int right) {
	if (left >= right) return;
    int pivot = M[(left + right) / 2]; 
    int i = left, j = right ;
    do {
        while (M[i] < pivot) i++;
        while (M[j] > pivot) j--;
        if (i <= j) {
            int temp = M[i];
            M[i] = M[j];
            M[j] = temp;
            i++;
            j--;
        }
    } while (i < j);
    QuickSort(M,left, j);
    QuickSort(M,i,right);

}
void Merge(int M[],int left,int mid,int right) {
    int nTemp=right - left + 1;
	int Temp[nTemp];
    int pos = 0;
    int i = left;
    int j = mid + 1;
    while(!(i>mid && j>right)) {
        if((i<=mid && j <=right && M[i]<M[j]) || j>right) 
            Temp[pos++] = M[i++];                    
        else
            Temp[pos++] = M[j++]; 
    }
    for(i=0;i<nTemp;i++) {
        M[left + i] = Temp[i];            
   }
}
void MergeSort(int M[], int left, int right) {
	if (left >= right) return;
    int mid = (left + right) / 2;
	MergeSort(M, left, mid);
    MergeSort(M, mid + 1, right);
    Merge(M, left, mid, right);            

}
