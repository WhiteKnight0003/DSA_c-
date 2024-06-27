#include<bits/stdc++.h>
using namespace std;

// có 3 ước khi nó là bình phương của số chính phương
const int nmax = 1000000;
int snt[nmax];
void sang(){
	memset(snt,1,sizeof(snt));
	snt[0] = snt[1] = 0;
	for(int i=2;i<=sqrt(nmax);i++){
		if(snt[i]){
			for(int j=i*i;j<=nmax;j+=i){
				snt[j]=0;
			}
		}
	}
}
int main(){
	int q; cin>>q;
	sang();
	while(q--){
		int count =0;
		long long n,m; cin>>n>>m;
		for(long long i=n;i<=sqrt(m);i++){
			if(snt[i]){
				//cout<<i*i<<" ";
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}