#include<bits/stdc++.h>
using namespace std;

int n, x[100], ok, cnt;

void ktao(){
	cnt = 1;
	x[1] = n;
}

void sinh(){
	int i = cnt;
	while(i>=1 && x[i]==1){
		--i;
	}
	if(i==0){
		ok=0;
	}
	else {
		x[i]--;
		int thieu = cnt - i + 1;
		int thuong = thieu / x[i];
		int du = thieu % x[i];
		cnt = i;
		for(int j=1;j<=thuong;j++){
			x[cnt+1]=x[i];
			++cnt;
		}
		if(du){
			x[cnt+1]= du;
			++cnt;
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		ktao();
		ok=1;
		while(ok){
			cout<<"(";
			for(int i=1;i<cnt;i++){
				cout<<x[i]<<" ";
			}
			cout<<x[cnt]<<") ";
			sinh();
		}
		cout<<endl;
	}
	return 0;
}