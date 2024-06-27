#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define endl "\n"
#define se second
#define fi first
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)

void xyly(int n,int k){
	int a=0;
	int b=0;
	fo(i,n){
		char c;
		cin>>c;
		if(c=='A')
			a++;
		else b++;
	}
	// bien doi A or B de dc 1 day co k chu B
	if(k==b)
		cout<<"0"<<endl;
	else {
		cout<<"1"<<endl;
		if(k>b){
	   // k-b=1 chir caanf thay 1 chu so
			if(k-b!=1)
				cout<<k-b+1<<" B"<<endl;
			else cout<<k-b<<" B"<<endl;
		}
		else{ 
			if(b-k ==n)
				cout<<b-k<<" A"<<endl;
			else cout<<b-k+1<<" A"<<endl;
		}
	}
}
int main(){
	fast;
	int t; cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		xyly(n,k);
	}
	return 0;
}