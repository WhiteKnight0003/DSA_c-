#include<bits/stdc++.h>
using namespace std;

#define For(i,a,b) for(int i=a;i<=b;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

void xuly(int n){
	int count =0;
	For(i,2,(int)sqrt(n)){
		if(n%i==0){
			while(n%i==0){
				n/=i;
			}
			count++;
		}
	}
	if(n>1){
		cout<<count+1<<endl;
	}
	else cout<<count<<endl;
}

int main(){
	int q; cin>>q;
	while(q--){
		int n; cin>>n;
		xuly(n);
	}
	return 0;
}