#include<bits/stdc++.h>
using namespace std;

// n<10^6
const int nmax = 1000001;
bool snt[nmax];
void sang(){
	memset(snt,1,sizeof(snt));
	snt[0] = snt[1] =false;
	for(int i=2;i<=sqrt(nmax);i++)
		if(snt[i])
			for(int j=i*i;j<=nmax;j+=i)
				snt[j] =false;
		}

// n> 10^6
bool check(long long n){
	if(n<2)
		return false;
	if(n%2==0 && n!=2)
		return false;
	for(int i=3;i<=sqrt(n);i+=2)
		if(n%i==0)
			return false;
		return true;
}
		int main(){
			int n; cin>>n;
			sang();
			for(int i=1;i<=n;i++){
				// if(snt[i])
				if(check(i))
					cout<<i<<" ";
			}
				return 0;
			}