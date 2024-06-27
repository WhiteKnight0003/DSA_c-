#include<bits/stdc++.h>
using namespace std;

int n;
char x[10000];
bool ok;

void ktao(){
	x[1]='A';
	for(int i=2;i<=n;i++){
		x[i]=x[i-1]+1;
	}
	for(int i=n+1;i<=2*n;i++){
		x[i]='1';
	}
}

void hoanvi(){
	int i=n-1;
	while(i>=1 && x[i]>x[i+1]){
		--i;
	}
	if(i==0){
		ok= false;
	}
	else{
		int j=n;
		while(x[i]>x[j]){
			--j;
		}
		swap(x[i],x[j]);
		reverse(x+i+1,x+n+1);
	}
}

void sinh(){
	int i=2*n;
	while(i>=n+1 && x[i] == n+'0'){
		x[i] = '1';
		--i;
	}
	if(i==n){
		hoanvi();
	}
	else{
		x[i]++;
	}
}

bool check(){
	for(int i=n+1;i<=2*n;i++){
		if(x[i] < '1' && x[i] > n+'0')
			return false;
	}
	return true;
}
int main(){
	cin>>n;
	ktao();
	ok=true;
	while(ok){
		if(check()){
			for(int i=1;i<=2*n;i++){
				cout<<x[i];
			}
			cout<<endl;
		}
		sinh();
	}
	return 0;
}