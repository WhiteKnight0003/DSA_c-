#include<bits/stdc++.h>
using namespace std;

int solve(char c[]){
	int res=0;
	for(int i=0;i<strlen(c);i++)
		if((c[i]-'0') %2 ==0){
			res+=i+1;
		}
	return res;
}

int main(){
	char c[1000];
	cin>>c;
	cout<<solve(c)<<endl;
	return 0;
}