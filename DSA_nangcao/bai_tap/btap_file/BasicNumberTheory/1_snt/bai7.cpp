#include<bits/stdc++.h>
using namespace std;

#define For(i,a,b) for(int i=a;i<=b;i++)
#define endl "\n"

const int nmax = 10000000;
int snt[nmax];

void sang(){
	memset(snt,1,sizeof(snt));
	snt[0]=snt[1]=0;
	For(i,2,sqrt(nmax)){
		if(snt[i]){
			for(int j=i*i;j<=nmax;j+=i){
				snt[j]=0;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int q; cin>>q;
	sang();
	while(q--){
		int n;
		cin>>n;
		For(i,2,n/2){
			if(snt[i] && snt[n-i])
				cout<<i<<" "<<n-i<<endl;
		}
	}
	return 0;
}