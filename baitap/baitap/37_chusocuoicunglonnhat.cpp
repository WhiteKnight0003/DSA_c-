// tức là từ trái qua phải các vị trí phải , hơn chữ số cuối cùng 
#include<bits/stdc++.h>
using namespace std;

int prime(int n){
	for(int i=2;i<=sqrt(n); i++)
		if(n%i==0)
			return 0;
	return 1;
}

int check(int n){
	int temp=n;
	int rev= n%10;
	n/=10;
	int ans;
	while(n){
		ans= n%10;
		if(ans > rev)
			return 0;
		n/=10;
	}
	return 1;
}
int main(){
	int n; cin>>n;
	int cnt=0;
	for(int i=2; i<=n; i++)
		if(prime(i) && check(i)){
			++cnt;
			cout<<i<<" ";
		}
		cout<<endl;
		cout<<cnt;
	return 0;
}