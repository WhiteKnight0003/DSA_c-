#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans[100];
void sieve(){ // int ra n số fibo nasi
	ans[0]=0;
	ans[1]=1;
	for(int i=2;i<=100;i++)
	   ans[i] = ans[i-1] + ans[i-2];
}
/*
int main(){
	sieve();
	int t; cin>>t; 
	while(t--){
		int n; cin>>n;
		for(int i=0;i<n;i++)
			cout<<ans[i]<<" ";
		cout<<endl;
	}
	return 0;
}
*/
// kt số nguyên tố 
int main(){
	sieve();
	int t; cin>>t; 
	while(t--){
		ll n; cin>>n;
		int cnt=0;
		for(int i=0;i<=92;i++)
			if(ans[i] == n)
				cnt++;
		if(cnt !=0)
			cout<<"YES"<<endl;
		else 
		    cout<<"NO"<<endl;
	}
	return 0;
}