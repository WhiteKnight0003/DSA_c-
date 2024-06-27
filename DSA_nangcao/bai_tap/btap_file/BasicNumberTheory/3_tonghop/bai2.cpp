#include<bits/stdc++.h>
using namespace std;

bool check(long long n){
	if((int)sqrt(n) == sqrt(n))
		return true;
	return false;
}

int main(){
	int q; cin>>q;
	while(q--){
		long long n; cin>>n;
		if(check(n))
			cout<<"YES"<<endl;
		else  cout<<"NO"<<endl;
	}
	return 0;
}