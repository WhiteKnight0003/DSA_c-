#include<bits/stdc++.h>
using namespace std;

bool check(int n){
	if((int)sqrt(n) == sqrt(n))
		return true;
	return false;
}

int main(){
	int q; cin>>q;
	while(q--){
		int a,b; cin>>a>>b;
		for(int i=a;i<=b;i++){
			if(check(i))
				cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}