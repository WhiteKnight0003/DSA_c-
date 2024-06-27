#include<bits/stdc++.h>
using namespace std;

int n;
char x[10000],c;
bool ok;

void ktao(){
	x[1]='A';
	int i=2;
	while(x[i]<=c){
		++i;
		x[i]=x[i-1]+1;
	}
	n=i;
}

int main(){
	cin>>c; 
	ktao();
	for(int i=1;i<=n;i++)
		cout<<x[i];
}