#include<iostream>
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
	cout<<"\nMang da nhap la : \n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
}

void daonguoc(int n, int a[]){
	int temp;
	for(int i=0;i<n/2;++i){
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	cout<<"\nMang da dao nguoc la :\n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
}

int main(){
	nhapmang(n,a);
	xuatmang(n,a);
	daonguoc(n,a);
	return 0;
}