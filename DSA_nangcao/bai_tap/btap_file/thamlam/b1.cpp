#include<bits/stdc++.h>
using namespace std;

#define ll long long 
int main(){
	int num = 10;
	int a[] = {1000,5000,200,100,50,20,10,5,2,1};

	int t; cin>>t;
	while(t--){
		ll res=0;
		int n; cin>>n;
		for(int i=0;i<num;i++){
				res+=n/a[i];
				n%=a[i];
		}
		cout<<res<<endl;
	}

return 0;
}