#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define fab(i,a,b) for(int i=a;i<=b;i++)
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define se second
#define fi first

/*
bool check(vector<int> &v, int n, int y){
	int sum=0;
	for(int i=0;i<v.size();i++){
		sum+=v[i];
		if(sum>=y)
			break;
	}
	if(sum==y)
		return true;
	return false;
}
*/
int check(vector<int> &v, int n, int x, int y){
	if(x==1){
		int sum=0;
		for(int i=0;i<v.size();i++){
			sum+=v[i];
			if(sum>=y)
				break;
		}
	}
	else if(x==2){
		
	}
	return sum;
}

int main(){
	fast;
	int t; cin>>t;
	while(t--){
		int n, q;
		cin>>n>>q;
		vector<int> v(n);
		for(auto &x: v)
			cin>>x;
		while(q--){
			int x,y,z;
			cin>>x;
			if(x==1) {
				cin>>y;
	    		/*
	    		if(check(v,n,y))
	    			cout<<"YES"<<endl;
	    		else cout<<"NO"<<endl;
	    		*/
				cout<<check(v,n,y)<<endl;
			}
			if(x==2){
				cin>>y>>z;
				v[y-1] =z;
			}
		}
	}
	return 0;
}