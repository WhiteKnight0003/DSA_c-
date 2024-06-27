#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define For(i,a,b) for(int i=a;i<=b;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
	int n; cin>>n;
	int even=0;
	int odd =0;
	while(n){
		int k=n%10;
		if(k%2==0)
			even++;
		else odd++;
			n/=10;
	}
	cout<<even<<" "<<odd;
}