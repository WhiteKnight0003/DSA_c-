#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define For(i,a,b) for(int i=a;i<=b;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// 10 = 1 2 5 10 = n/i + n/
// 28 = 1 2 4 7 14 28 
// 25 = 1 5 25
int sum(int n){
	int summ=0;
	For(i,1,sqrt(n)){
		if(n%i==0){
			if(i != n/i){
				summ+=n/i + i;
			}
			else {
				summ+=n/i;
			}
		}
	}
	return summ;
}

int main(){
	fast;
	int q; cin>>q;
	while(q--){
		int n; cin>>n;
		cout<<sum(n)<<endl;
	}
	return 0;
}