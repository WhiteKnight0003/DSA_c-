#include<bits/stdc++.h>
using namespace std;

int count(char c[]){
	int cnt=0;
	for(int i=0;i<strlen(c)-1;i++)
		if(c[i] == c[i+1])
			++cnt;
	return cnt;
}
int main(){
	char c[1000];
	cin>>c;
	cout<<count(c)<<endl;
	return 0;
}