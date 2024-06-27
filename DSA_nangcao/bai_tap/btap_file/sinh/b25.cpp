#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int n, x[100], ok;

void ktao(){
	for(int i=1;i<=n;i++){
		x[i]=0;
	}
}
void sinh(){
	int i=n;
	while(i>=1 && x[i]==1){
		x[i]=0;
		--i;
	}
	if(i==0)
		ok= false;
	else x[i]=1;
}

bool dk(){
	for(int i=1;i<=n-1;i++)
		if(x[i] == x[i+1])
			return false;
	return true;
}

int main(){
	cin>>n;
	ktao();
	ok=true;
	while(ok){
		if(dk()){
			for(int i=1;i<=n;i++){
				cout<<x[i];
			}
			cout<<endl;
		}
		sinh();
	}
	return 0;
}