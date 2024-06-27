#include<bits/stdc++.h>
using namespace std;

int n;
char x[100];
bool ok;

void ktao(){
	for(int i=1;i<=n;i++){
		x[i]='A';
	}
}

void sinh(){
	int i=n;
	while(i>=1 && x[i]=='H'){
		x[i]='A';
		--i;
	}
	if(i==0)
		ok = false;
	else
	x[i]='H';
}

bool check(){
	if(x[1]!='H'){
		return false;
	}
	if(x[1]=='H'){
		if(x[n]=='A'){
			for(int i=1;i<=n-1;i++){
				if(x[i]=='H' && x[i+1]=='H'){
					return false;
				}
			}
		}
		else return false;
	}
	return true;
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		ktao();
		ok=true;
		while(ok){
			if(check()){
				for(int i=1;i<=n;i++){
					cout<<x[i];
				}
				cout<<endl;
			}
			sinh();
		}
	}
	return 0;
}