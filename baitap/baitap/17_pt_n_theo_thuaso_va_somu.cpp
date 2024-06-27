#include<bits/stdc++.h>
using namespace std;

void analysis(int n){
	cout<<n<<" = ";
	for(int i=2;i<=sqrt(n); i++)
	   if(n%i==0){
		    int cnt=0;
		    while(n%i==0){
			n/=i;
			++cnt;
		}
		cout<<i<<"^"<<cnt;
		if(n!=1)
			cout<<" * ";
	}
	if(n!=1)
		cout<<n<<"^1";
}

int main(){
	int n; cin>>n;
	analysis(n);
	return 0;
}