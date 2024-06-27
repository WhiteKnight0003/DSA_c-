/* code 1
#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
	if(n<=1)
		return false;
	for(int i=2;i<n;i++)
		if(n%i==0)
			return false;
	return true;
}
int main(){
	int n; cin>>n;
	int i=0; 
	int cnt=0;

	while(cnt<n){
		if(prime(i)){
			cout<<i<<endl;
			++cnt;
		}
		++i;
	}
}
*/

// code 2
#include<bits/stdc++.h>
using namespace std;

int prime[1000001];
void sieve(){
	memset(prime , 1, sizeof(prime));
	prime[0] =  prime[1] =0;
	for(int i=2;i<=1000;i++)
		if(prime[i])
			for(int j=i*i; j<=1000000; j+=i)
				prime[j]=0;
}
int main(){
	sieve();
	int n; cin>>n;
	int i=0; 
	int cnt=0;

	while(cnt<n){
		if(prime[i]){
			cout<<i<<endl;
			++cnt;
		}
		++i;
	}
}