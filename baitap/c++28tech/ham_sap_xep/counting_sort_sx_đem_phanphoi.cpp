#include<bits/stdc++.h>
using namespace std;

int cnt[10000001];

int main(){
	int a[1000], n;
	cin>>n;
	int m= INT_MIN;
	for(auto &x: a){
		cin>>x;
		a[x]++;
		m= max(m,x);
	}

	for(int i=0;i<=m; i++)
		if(cnt[i] !=0)
			for(int j=0;j<cnt[i]; j++)
				cout<<i<<" ";

	return 0;
}
