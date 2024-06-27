#include<bits/stdc++.h>
using namespace std;

void reverse(int a[], int n){
	int l=0, r=n-1;
	while(l<r){
		int tmp=a[l];
		a[l]=a[r];
		a[r]= tmp;
		++l; --r;
	}
}

void solve(char a[], char b[]){
	int n1= strlen(a);
	int n2= strlen(b);
	int n=0;
	int x[n1], y[n2], z[n1+1];

	for(int i=0;i<n1;i++) x[i]= a[i]-'0';
	for(int i=0;i<n2;i++) y[i]= b[i]-'0';
	reverse(x,n1); 
    reverse(y,n2);

    for(int i=n2;i<n1;i++)
    	y[i]=0;

    int nho=0;
    for(int i=0;i<n1;i++){
        int tmp = x[i]-y[i] -nho; -1
        if(tmp<0){
          nho = 1;
    	  z[n++] = 10 +tmp; 9 
       } else {
       	   z[n++] = tmp;
       	   nho =0;
       }
    }
    int ok =0;
    for(int i=n-1;i>=0;i--){
    	if(ok ==0 && z[i])
    		ok =1;
    	if(ok) cout<<z[i];
    }
   // if(ok) cout<<"0";
}

int main(){
	int t; cin>>t;
	while(t--){
		char c[1000], d[1000];
		cin>>c>>d;
		if(strlen(c) > strlen(d) || (strlen(c) == strlen(d) && strcmp(c,d)>0))
			solve(c,d);
		else solve(d,c);
		cout<<endl;
	}
}