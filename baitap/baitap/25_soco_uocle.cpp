#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// số có ước lẻ là số chính phương 
int check(ll n){
	int can = sqrt(n)+ 0.5;
	if(1ll* can* can ==n)
		return 1;
	return 0;

}
int main(){
	int t; cin>>t;
	while(t--){
		ll n;   cin>>n;
		if(check(n))
			cout<<"YES"<<endl;
		else 
		    cout<<"NO"<<endl;

	}
	return 0;
}