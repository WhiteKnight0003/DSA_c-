#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define For(i,a,b) for(int i=a;i<=b;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int dem(int n){
	int count=0;
	For(i,1,sqrt(n)){
		if(n%i==0){
			if(n/i != i){
				count+=2;
			}
			else count++;
		}
	}
	return count;
}

int main(){
	fast;
	int q; cin>>q;
	while(q--){
		int n; cin>>n;
		cout<<dem(n)<<endl;
	}
	return 0;
}
