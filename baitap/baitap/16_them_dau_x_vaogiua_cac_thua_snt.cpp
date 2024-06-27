#include<bits/stdc++.h>
using namespace std;

void analysis(int n){
	for(int i=2;i<=sqrt(n); i++)
		while(n%i==0){
			cout<<i;
			n/=i;
			if(n!=1 )
				cout<<"x";
		}
	if(n!=1)
		cout<<n;
}
int main(){
	int n;
	cin>>n;
	analysis(n);
	return 0;
}