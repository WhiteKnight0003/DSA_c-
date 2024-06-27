#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define For(i,a,b) for(int i=a;i<=b;i++)

bool xuly(int n){
	int res=0;
	For(i,2,n){
		if(n%i==0){
			int count=0;
			while(n%i==0){
				count++;
				n/=i;
			}
			if(count>1)
				return false;
			res++;
		}
	}
	if(n>1) res++;
	if(res !=3)
		return false;
	return true;
}

int main(){
	int n; cin>>n;
	For(i,1,n){
		if(xuly(i))
			cout<<i<<" "; 
	}
	return 0;
}