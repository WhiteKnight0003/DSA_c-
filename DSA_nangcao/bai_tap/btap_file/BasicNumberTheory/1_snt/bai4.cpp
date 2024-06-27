#include<bits/stdc++.h>
using namespace std;
#define end "\n"
const int nmax = 1000000;
int snt[nmax];

void sang(){
	memset(snt,1,sizeof(snt));
	snt[0] = snt[1] = 0;
	for(int i=2;i<=sqrt(nmax);i++){
		if(snt[i]){
			for(int j=i*i;j<=nmax;j++){
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
		int n; cin>>n;
		if(snt[n])
			cout<<"YES"<<end;
		else cout<<"NO"<<end;
	}
	return 0;
}

