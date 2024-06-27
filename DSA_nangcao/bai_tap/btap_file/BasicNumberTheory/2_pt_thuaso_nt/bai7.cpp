#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define For(i,a,b) for(int i=a;i<=b;i++)

const int nmax = 1000000;
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

int xuly(int n){
	int tongchuso=0;
	int k=n;
	while(k){
		tongchuso+=k%10;
		k/=10;
	}
	return tongchuso;
}

int tonguoc(int n){
	int sumuoc=0;
	For(i,2,(int)sqrt(n)){
		if(n%i==0){
			while(n%i==0){
				if(i<10){
					sumuoc+=i;
				}
				else{
					int x=i;
					while(x){
						sumuoc+=x%10;
						x/=10;
					}
				}
				n/=i;
			}
		}
	}
	if(n>1){
		while(n){
			sumuoc+=n%10;
			n/=10;
		}
	}
	return sumuoc;
}

int main(){
	fast;
	int n; cin>>n;
	sang();
	For(i,1,n){
		if(!snt[i] && xuly(i)==tonguoc(i))
			cout<<i<<" ";
	}
	return 0;
}