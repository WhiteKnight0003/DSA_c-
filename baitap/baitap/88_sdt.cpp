#include<bits/stdc++.h>
using namespace std;

int solve(char c[], int n){
	int idx= -1;
	for(int i=0;i<n;i++)
	   if(c[i]=='8'){
	   	   idx =i;
	   	   break;
	   } 
	if(idx == -1) return 0;
	if(n-1-idx>=10) return 1; // n-1 (vị trí tối đa )
	return 0;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		char c[n];
		cin>>c;
		if(solve(c,n))
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}