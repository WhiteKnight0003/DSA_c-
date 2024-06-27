#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int n;
char c;
char x[1000];
bool ok;

void ktao(){
	for(int i=1;i<=n;i++){
		x[i]='A';
	}
}

void sinh(){
	int i=n;
	while(i>=1 && x[i]==c){
		--i;
	}
	if(i==0){
		ok=false;
	}
	else {
		x[i]++;
		for(int j=i+1;j<=n;j++){
			x[j]=x[j-1];
		}
	}
}

bool check(){
	for(int i=1;i<=n;i++){
		if(x[i]<'A' && x[i]>c)
			return false;
	}
	return true;
}
int main(){
	cin>>c;
	cin>>n;
	ktao();
	ok=true;
	while(ok){
		if(check()){
			for(int i=1;i<=n;i++){
				cout<<x[i];
			}
		}
		sinh(); 
		cout<<endl;
	}
	return 0;
}