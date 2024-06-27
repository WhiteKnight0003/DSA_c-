#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool check(ll n){
	ll can = cbrt(n)+0.5; // ham lay can bac  3
	return can*can*can ==n;
}

ll res;
int x[100],n;
string s;


void ql(int i){
	for(int j=0;j<=1;j++){
		x[i]=j; // lua chon cau hinh
		if(i == n-1){ // n= s.size() - ki tu cuoi cung
			ll tmp=0;
			for(int l=0;l<n;l++){
				if(x[l]){
					tmp=tmp*10+(s[l]-'0');
				}
			}
			if(check(tmp) && tmp > res){
				res=tmp;
			}
		}
		else ql(i+1); // quay lui tren tung ky tu
	}
}

int main(){
	int t; cin>>t;
while(t--){
	cin>>s;
	n = s.size();
	res=0;
	ql(0);
	if(res==0){
		cout<<"-1"<<endl;
	}
	else cout<<res<<endl;
}
return 0;
}