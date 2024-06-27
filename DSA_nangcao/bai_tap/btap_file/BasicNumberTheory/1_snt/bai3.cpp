#include<bits/stdc++.h>
using namespace std;

const int nmax = 10000000;
int snt[nmax];
void sang(){
	memset(snt,1,sizeof(snt));
	snt[0] = snt[1] = 0;
	for(int i=2;i<=sqrt(nmax);i++){
		if(snt[i]){
			for(int j=i*i;j<=nmax;j+=i){
				snt[j] = 0;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a,b;
	cin>>a>>b;
	sang();
	for(int i=a; i<=b;i++){
		if(snt[i]){
			cout<<i<<" ";
		}
	}
	return 0;
}