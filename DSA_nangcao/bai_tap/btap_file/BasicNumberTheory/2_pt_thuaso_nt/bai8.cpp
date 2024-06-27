#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define For(i,a,b) for(int i=a;i<=b;i++)

const int nmax = 10000000;
int snt[nmax];

void sang(){
	memset(snt,1,sizeof(snt));
	snt[0] = snt[1] = 0;
	For(i,2,(int)sqrt(nmax)){
		if(snt[i]){
			for(int j=i*i;j<=nmax;j+=i){
				snt[j]=0;
			}
		}
	}
}

int uoc(int n){
	if(!snt[n]){
		For(i,2,sqrt(n)){
			if(n%i==0){
				while(n%i==0){
					if(n/i==1){
						return i;
					}
					n/=i;
				}
			}
		}
		if(n>1) return n;
	}
	return n;
}
int main(){
	int n; cin>>n;
	For(i,2,50){
		cout<<i<<" "<<uoc(i)<<endl;
	}
	return 0;
}