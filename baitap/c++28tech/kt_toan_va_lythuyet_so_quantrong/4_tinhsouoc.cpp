#include<bits/stdc++.h>
using namespace std;

int demsouoc(int n){
	int cnt=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
		   if(i != n/i)
			   cnt+=2;
		   else ++cnt;
	  }
	}
	return cnt;
}

// hoặc 
int count(int n){
	int res=1;
	for(int i=2;i<=sqrt(n);i++){
		int cnt=0;
		while(n%i==0){
			++cnt;
			n/=i;
		}
		res*=(cnt+1);
	}
	if(n!=1) res*=2;
	return res;
}
int main(){
	int n; cin>>n;
	cout<<demsouoc(n)<<endl;
	cout<<count(n);
	return 0;
}