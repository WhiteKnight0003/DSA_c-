#include<bits/stdc++.h>
using namespace std;

void arrow(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=2*(i-1);j++)
			cout<<"~";
		for(int j=1;j<=n;j++)
			if(i+j<=n+1)
				cout<<"*";
		cout<<endl;
	}

	for(int i=n-1;i>=1;i--){
		for(int j=1;j<=2*(i-1);j++)
			cout<<"~";
		for(int j=1; j<=n-i+1; j++)
			cout<<"*";
		cout<<endl;
	}
}

void arrow2(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++)
			cout<<"~";
		for(int j=1;j<=n;j++)
			if(i+j<=n+1)
			cout<<"*";
		cout<<endl;
	} 
	for(int i=2;i<=n;i++){
		for(int j=1;j<=i-1;j++)
			cout<<"~";
		for(int j=1;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	arrow2(n);
	return 0;
}