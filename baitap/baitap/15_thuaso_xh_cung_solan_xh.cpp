#include<bits/stdc++.h>
using namespace std;

void analysis(int n){
	for(int i=2;i<=sqrt(n); i++)
		if(n%i==0){
			cout<<i<<" ";
			int cnt=0;
			while(n%i==0){
				n/=i;
				++cnt;
			}
			cout<<cnt<<endl;
		}
	if(n!=1)
			cout<<n<<" 1"<<endl;
}

int main(){
	int n; cin>>n;
	analysis(n);
	return 0;
}