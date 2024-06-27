#include<bits/stdc++.h>
using namespace std;

int n,s, a[100],x[100],ok;
bool used[100];

void inp(){
	cin>>n>>s;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a,a+n+1);
	memset(used,false,sizeof(used));
	ok=0;
}
void Try(int i, int k, int sum){
	if(sum==s){
		cout<<"[ ";
		for(int j=1;j<k;j++){
			cout<<x[j];
			if(j!=k-1)  cout<<" ";
		}
		cout<<" ] ";
		ok=1;
		return ;
	}
	for(int j=i;j<=n;j++){
		if(!used[j] && sum+a[j] <= s){
			used[j]= true;
			x[k]=a[j];
			Try(j,k+1,sum+a[j]);
			used[j]=false;
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		inp();
		Try(1,1,0);
		if(ok) cout<<endl;
		else cout<<"-1\n";
	}
}