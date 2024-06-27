#include<bits/stdc++.h>
using namespace std;

#define For(i,a,b) for(int i=a;i<=b;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

void sang(int n){
	For(i,2,n){
		if(n%i==0){
			int count=0;
			while(n%i==0){
				n/=i;
				count ++;
			}
			if(n>1) cout<<i<<"("<<count<<") ";
			else cout<<i<<"("<<count<<") "<<endl;
		}
	}
}

int main(){
	fast;
	int q; cin>>q;
	For(i,1,q){
		cout<<"#TC"<<i<<": ";
		int n; cin>>n;
		sang(n);
	}
	return 0;
}