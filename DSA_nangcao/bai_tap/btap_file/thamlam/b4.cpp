#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		priority_queue<int,vector<int>, greater<int>> Q;
		for(auto &x: a){
			cin>>x;
			Q.push(x);
		}

		ll num1=0, num2=0;
		int i=0;
		while(Q.size()){
			if(i%2==0){
				num1*=10;
				num1+=Q.top();
				++i;
				Q.pop();
			}
			else{
				num2*=10;
				num2+=Q.top();
				++i;
				Q.pop();
			}
		}
		cout<<num1+num2<<endl;
	}
	return 0;
}