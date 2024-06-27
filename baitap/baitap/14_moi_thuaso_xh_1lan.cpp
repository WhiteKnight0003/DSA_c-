#include<bits/stdc++.h>
using namespace std;

void analysis(int n){
	for(int i=2;i<=sqrt(n); i++)
		if(n%i==0){
		  cout<<i<<" ";
		    while(n%i==0){ // chi i chạy đến bao h hết 
			  n/=i;
		}
	}
	if(n!=1)
		cout<<n<<" ";
}
int main(){
	int n; cin>>n;
	analysis(n);
	return 0;
}