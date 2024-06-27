// so smith là số k phải số nguyên tố và tổng các chữ số của nó = tổng các chữ số của các ước 
#include<bits/stdc++.h>
using namespace std;

int sum(int n){
	int ans=0; 
	while(n){
		ans+=n%10;
		n/=10;
	}
	return ans;
}
int sum2(int n){
	int sum1= sum(n);
	int ans=0;
	for(int i=2;i<=sqrt(n); i++)
		while(n%i==0){
			ans+=sum(i);
			n/=i;
		}
	if(n!=1)
		ans+=sum(n);

	if(ans== sum1)
		return 1;
	else return 0;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		  if(sum2(n))
			cout<<"YES"<<endl;
		else 
		    cout<<"NO"<<endl;
	}
	return 0;
}