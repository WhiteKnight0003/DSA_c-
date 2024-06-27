/* code 1
#include<bits/stdc++.h>
using namespace std;

int find(int n){
	for(int i=2;i<=sqrt(n); i++){
		if(n%i==0)
			return i;
	}
	return n;
}

int main(){
	int t; cin>>t;
	while(t--){
		int x; cin>>x;
		for(int i=1;i<=x;i++)
			cout<<find(i)<< " " ;
		cout<<endl;
		}

	return 0;
}
*/

// code 2 : biến đổi thuật toán sàng snt
#include<bits/stdc++.h>
using namespace std;

int prime[100002];
void sieve(){
	for(int i=1; i<=100000; i++)
		prime[i]=i;
	for(int i=2; i<= sqrt(100000) ; i++)
		if(prime[i]==i)
			for(int j=i*i ; j<=100000; j+=i)
				if(prime[j] == j)
					prime[j] =i;
}

int main(){
	sieve();
	int t; cin>>t;
	while(t--){
		int x; cin>>x;
		for(int i=1; i<=x;i++)
			cout<<prime[i]<<" ";
		cout<<endl;
	}
	return 0;
}