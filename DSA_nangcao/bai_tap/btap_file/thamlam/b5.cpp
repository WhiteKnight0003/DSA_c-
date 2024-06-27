#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		int a[n];
		priority_queue<int,vector<int>, greater<int>> Q;

		ll sum=0;
		if(k>n){
			cout<<"Khong ton tai !"<<endl;
		}
		for(auto &x: a){
			cin>>x;
			sum+=x;
			Q.push(x);
		}
		int p1=0;
		for(int i=0;i<k;i++){
			p1+=Q.top();
			Q.pop();
		}
		int p2=sum-p1;
		cout<<abs(p1-p2)<<endl;
	}
	return 0;
}