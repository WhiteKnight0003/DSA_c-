#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i,a,b) for(int i=a;i<=b;i++)
const int nmax = 10000000;
int snt[nmax];

void sang(){
	memset(snt,1,sizeof(snt));
	snt[0] = snt[1] =0;
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
	int n; cin>>n;
	sang();
	int i=0;
	while(n>0){
		if(snt[i]){
			cout<<i<<endl;
			--n;
		}
		++i;
	}
	return 0;
}