#include<iostream>
using namespace std;
int a[100],n;

void nhapmang(int &n,int a[]){
	cout<<"Nhap vao so phan tu : ";
	cin>>n;

	for(int i=0;i<n;i++){
		cout<<"Nhap vao phan tu thu "<<i<<" : ";
		cin>>a[i];
	}
}

void xuatmang(int n,int a[]){
	cout<<"\nMang da nhap la : \n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
}

void xuatmangamduong(int n, int a[]){
	int d=0,*b,f=0,*c;
	b=(int*)malloc((n+1)*sizeof(int));
	c=(int *)malloc((n+1)*sizeof(int));
	for(int i=0;i<n;i++){
		if(abs(a[i])%2==0){
			b[d]=a[i];
			d++;
		}
		if (abs(a[i])%2!=0){
			c[f]=a[i];
			f++;
		}
	}
	cout<<"\nMang chan la : \n";
	for(int i=0;i<d;i++)
		cout<<b[i]<<"  ";
	cout<<"\nMang le la : \n";
	for(int i=0;i<f;i++)
		cout<<c[i]<<"  ";
}
int main(){
	nhapmang(n,a);
	xuatmang(n,a);
	xuatmangamduong(n,a);
	return 0;
}
