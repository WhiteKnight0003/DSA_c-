#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int symmetry(ll n){
	int temp=n;
	int kq=0;
	while(n){
	     kq=kq*10+n%10;
	    n/=10;
      }

    return kq == temp;
}

int analysis(ll n){
	int ans=0;
	for(int i=2; i<=sqrt(n); i++){
		int cnt =0;
		while(n%i==0){
			   ++cnt;
				n/=i;
		 }

		 if(cnt !=0 ) ++ans;
	}
	if(n!=1)
		++ans;
	
	return ans>=3;
}
int main(){
	ll a , b;
	cin>>a>>b;
	int check =0;
	for(ll i=a; i<=b ; i++)
		if(symmetry(i) && analysis(i)){
			check =1;
			cout<<i<<" ";
		}

	if(check ==0)
		cout<<"-1";
	return 0;
}