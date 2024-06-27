#include<bits/stdc++.h>
using namespace std;

int n, x[100];
bool check;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void ktao(){
	for(int i=1;i<=n;i++){
		x[i]=i;
	}
}

void sinh(){
	int i=n-1;
	while(i>=1 && x[i] > x[i+1]){
		--i;
	}
	if(i==0){
		check=false;
	}
	else {
		int j=n;
		while(x[i]>x[j]){
			j--;
		}
		swap(x[i],x[j]);
		reverse(x+i+1,x+n+1);
	}
} 

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		ktao();
		check = true;
		while(check){
			for(int i=1;i<=n;i++)
				cout<<x[i];
			sinh();
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}