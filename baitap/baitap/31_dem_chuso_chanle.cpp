#include<bits/stdc++.h>
using namespace std;

void analysis(long long n){
	int even=0;
	int odd=0;
	while(n){
		int temp= n%10;
		if(temp%2==0)
			even++;
		else 
		    odd++;

		n/=10;
	}
	cout<<even<<" "<<odd<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		analysis(n);
	}
	return 0;
}