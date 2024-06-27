#include<bits/stdc++.h>
using namespace std;

int n; char x[100]; bool ok ;
#define fast ios_base::with_stdio_false(0); cin.tie(0); cout.tie(0)

void ktao(){
	for(int i=1;i<=n;i++){
		x[i]='A';
	}
}
void sinh(){
	int i=n;
	while(i>=1 && x[i]=='B'){
		x[i]='A';
		--i;
	}
	x[i]='B';
	if(i==0)
		ok = false;
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		ktao();
		ok=true;
		while(ok){
			for(int i=1;i<=n;i++){
				cout<<x[i];
			}
			sinh();
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}