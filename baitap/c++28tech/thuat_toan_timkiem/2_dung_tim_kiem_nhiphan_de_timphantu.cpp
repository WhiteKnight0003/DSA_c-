#include<bits/stdc++.h>
using namespace std;

int first_pos(int a[],int n, int x){
	int res=-1;
	int l=0, r=n-1;
	while(l<=r){
	int m= (l+r)/2;
		if(a[m]==x){
			res=m;
			r=m-1; // tìm xem bên trái còn k
		}
		else if(a[m]<x)
		     l=m+1;
		else  r= m-1;
	}
	 return res;
}

int last_pos(int a[], int n, int x){
	int res=-1;
		int l=0, r=n-1;
	while(l<=r){
		int m= (l+r)/2;
		if(a[m]==x){
			res=m;
			l=m+1; // tìm xem bên phải còn k
		}
		else if(a[m]<x)
		     l=m+1;
		else  r= m-1;
	}
	 return res;
	}
int main(){
	int n,x; cin>>n>>x;
	int a[n];
	for(auto &x: a)
		cin>>x;
	int l= first_pos(a,n-1,x) ;
	int r= last_pos(a,n-1,x);
	if(l != -1)
		cout<<r-l+1<<endl;
	else cout<<"0"<<endl;
	return 0;
}