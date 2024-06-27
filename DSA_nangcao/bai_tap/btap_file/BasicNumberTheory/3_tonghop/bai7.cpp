#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


int dem(ll n){
   int uoc=1;
   for(int i=2;i<=sqrt(n);i++){
   	  if(n%i==0){
   	  	int count =0;
   	  	while(n%i==0){
   	  		count++;
   	  		n/=i;
   	  	}
   	  	++count;
   	  	uoc*=count;
   	  }
   }
   if(n>1) uoc*=2;
   // if(uoc%2!=0)
   //    return true;
   // return false;	
   return uoc;
}
int main(){
	fast;
	ll q; cin>>q;
	while(q--){
		ll n; cin>>n;
		// if(dem(n))
		// 	cout<<"YES"<<endl;
		// else cout<<"NO"<<endl;
			cout<<dem(n)<<endl;
	}
	return 0;
}
