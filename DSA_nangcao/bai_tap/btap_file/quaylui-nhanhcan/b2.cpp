#include<bits/stdc++.h>
using namespace std;

int n, t, v[100];

void Try(int i){
	if(i==0)
		return ;
	cout<<"[ ";
	for(int j=1;j<=i;j++){
		cout<<v[j-1];
		if(j==i) cout<<" ]" <<endl;
		else cout<<" ";
	}

	for(int j=1;j<i;j++){
		v[j-1]+=v[j];
	}
	Try(i-1);
}

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>v[i];
		Try(n);
	}
}