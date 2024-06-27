#include<bits/stdc++.h>
using namespace std;

#define For(i,a,b) for(int i=a;i<=b;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

bool xuly(int n){
	if(n<=1)
		return false;
	For(i,2,(int)sqrt(n)){
		if(n%i==0 && n%(i*i)==0){
			while(n%i==0){
				n/=i;
			}
		}
	}
		if(n>1) return false;
		else return true;
	return false;
}

int main(){
	int a,b;
	cin>>a>>b;
	For(i,a,b){
		if(xuly(i))
			cout<<i<<" ";
	}
	return 0;
}