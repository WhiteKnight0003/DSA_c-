// cho day a[] // sap xep lai - nếu A[i]= i in ra i else in -1
#include<iostream>
#include<map>
using namespace std;
typedef long long ll;
int main(){	
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		map<ll , bool> M;
		for(int i=0;i<n;i++){
			ll x; cin>>x;
			M[x] = true ; // đánh dấu x xh
		}
		for(int i=0; i<n;i++){
			if(M[i])
				cout<<i<<" ";
			else cout<<"-1 ";
		}
		cout<<endl;
	}
	return 0;
}