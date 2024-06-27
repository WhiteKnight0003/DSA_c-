/* code1
#include<bits/stdc++.h>
using namespace std;

void analysis(int n){
	for(int i=2;i<=sqrt(n); i++)
		if(n%i==0){
			int cnt=0;
			while(n%i==0){
				n/=i;
				++cnt;
			}
			cout<<i<<" "<<cnt<<endl;
		}
	if(n!=1)
		cout<<n<<" 1"<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		analysis(n);
	}
	return 0;
}
*/

// code 2
#include<bits/stdc++.h>
using namespace std;

int prime[100001];
void sieve(){
	for(int i=1; i<=100000; i++)
		prime[i]=i;
	for(int i=2 ; i<=sqrt(100000); i++)
		if(prime[i])
			for(int j=i*i; j<=100000; j+=i)
				if(prime[j] == j)
					prime[j] = i;
}

void analysis(int n){
	while(n!=1){
		int cnt=0;
		int tmp = prime[n]; // thùa số nguyên tố nho nhat hien tại của n
		while(n%tmp ==0){
			++cnt;
			n/=tmp;
		}
		cout<<tmp<<"("<<cnt<<")  ";
	}
	cout<<"\n";
}
int main(){
	sieve();
	int t; cin>>t;
	for(int i=1;i<=t;i++){
		int n; cin>>n;
		cout<<"#TC"<<i<<" : ";
		analysis(n);
	}
	return 0;
}