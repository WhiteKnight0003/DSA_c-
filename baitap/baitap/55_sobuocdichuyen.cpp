#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(int a, int b){
	if(a%b==0)
		return 0;
	else {
		int x= a/b;
		return (x+1)*b-a;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		ll a, b;
		cin>>a>>b;
		cout<<solve(a,b)<<endl;
	}
	return 0;
}