#include<bits/stdc++.h>
using namespace std;

int solve(char c[]){
	int res = 1;
	int cnt=1;
	for(int i=0;i<strlen(c)-1;i++){
		if(c[i]!=c[i+1])
			++cnt;
		else cnt=1;

		res=max({res,cnt});
	}
	return res;
}
int main(){
	int t; cin>>t; 
	while(t--){
		char c[1000];
		cin>>c;
		cout<<solve(c)<<endl;
	}
	return 0;
}