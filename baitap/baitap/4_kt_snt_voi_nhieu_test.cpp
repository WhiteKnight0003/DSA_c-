#include<bits/stdc++.h>
using namespace std;
/*
bool prime(int n){
	if(n<=1) 
		return false;
	for(int i=2;i<n;i++)
		if(n%i==0)
			return false;
	return true;
}
int main(){
	int t; cin>>t;
	while(t--){
		int x; cin>>x;
		if(prime(x))
			cout<<"YES"<<endl;
		else 
		    cout<<"NO"<<endl;
	}
	return 0;
}
*/



// or 
#include<bits/stdc++.h>
using namespace std;

int prime[1000001];

void kt(){
	memset(prime, 1, sizeof(prime));
	prime[0]= prime[1] =0;

	for(int i=2;i<=1000;i++)
		if(prime[i])
			for(int j=i*i; j<=1000000 ; j+=i)
				prime[j]=0;
}

int main(){
	kt();
	int t; cin>>t;
	while(t--){
		int x; cin>>x;
		if(prime[x])
			cout<<"YES"<<endl;
		else 
		    cout<<"NO"<<endl;
	}
	return 0;
}