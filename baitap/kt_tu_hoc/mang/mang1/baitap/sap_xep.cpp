/*sắp xếp tăng dần giam dan vs qsort() - thuộc cstdlib 
=>> cú pháp qsort(array,length,size,compare_fuct );  

int compareIntAsc (const void *a, const void *b){
	int aNum = *(int*)a;
	int bNum = *(int*)b;
	return aNum -bNum;
}

#include<iostream>
#include<cstdlib>
using namespace std;
 
 int a[100],n;

 void nhapmang(int &n,int a[]){
	cout<<"Nhap so phan tu : ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Nhap vao phan tu thu "<<i<<" : ";
		cin>>a[i];
	}
}
void xuatmang(int n, int a[]){
	cout<<"\nXuat Mang : \n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
}

int compareIntAsc( const void *a, const void *b){
	int aNum = *(int*)a;
	int bNum = *(int*)b;

	return aNum - bNum ;
}

int compareIntDesc(const void *a, const void *b){
	int aNum = *(int *)a;
	int bNum = *(int *)b;

	return bNum -aNum;
}
void sapxeptang(int n, int a[]){
	qsort(a, n , sizeof(int) , compareIntAsc);
	cout<<"\n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}

void sapxepgiam(int n, int a[]){
	qsort(a , n , sizeof(int),compareIntDesc);
	cout<<"\n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
int main(){
	nhapmang(n,a);
	xuatmang(n,a);
	sapxeptang(n,a);
	sapxepgiam(n,a);
	return 0;
}
*/


/* sắp xếp bằng cách cắm cờ
#include<iostream>
#include<cstdlib>
using namespace std;
 
 int a[100],n;

 void nhapmang(int &n,int a[]){
	cout<<"Nhap so phan tu : ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Nhap vao phan tu thu "<<i<<" : ";
		cin>>a[i];
	}
}
void xuatmang(int n, int a[]){
	cout<<"\nXuat Mang : \n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
}

void sapxeptang(int n, int a[]){
	int temp;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j]){
				temp = a[i];
				a[i] =a[j];
				a[j] =temp;
			}
	cout<<"\n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}

void sapxepgiam(int n, int a[]){
	int temp;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]<a[j]){
				temp = a[i];
				a[i] =a[j];
				a[j] =temp;
			}
	cout<<"\n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
int main(){
	nhapmang(n,a);
	xuatmang(n,a);
	sapxeptang(n,a);
	sapxepgiam(n,a);
	return 0;
} */



//sắp xếp vs sort - sort(a,a+n)
#include<iostream>
#include<algorithm>
using namespace std;
 
 int a[100],n;

 void nhapmang(int &n,int a[]){
	cout<<"Nhap so phan tu : ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Nhap vao phan tu thu "<<i<<" : ";
		cin>>a[i];
	}
}
void xuatmang(int n, int a[]){
	cout<<"\nXuat Mang : \n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
}

void sapxeptang(int n, int a[]){
	sort(a,a+n);
	cout<<"\n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}

int main(){
	nhapmang(n,a);
	xuatmang(n,a);
	sapxeptang(n,a);
	return 0;
}
