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
	int count =0;
	while(q--){
		int n; cin>>n;
		for(int i=2;i<=sqrt(n);i++){
			if(snt[i]){
				cout<<i*i<<" ";
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}