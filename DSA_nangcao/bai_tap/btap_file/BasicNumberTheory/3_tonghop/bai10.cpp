#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define endl "\n"
#define se second
#define fi first
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)

bool check(int n){
	if(n<2)
		return false;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}
bool tangdan(int n){
	int num = n%10;
	n/=10;
	while(n){
		int k=n%10;// so du 
		if(k<num){
			n/=10;
			num=k;
		}
		else return false;
	}
	return true;
}
bool giamdan(int n){
	int num = n%10;
	n/=10;
	while(n){
		int k=n%10;// so du 
		if(k>num){
			n/=10;
			num=k;
		}
		else return false;
	}
	return true;
}
void xuly(int n){
	int cnt=0;
	for(int i=pow(10,n-1)+1;i<pow(10,n);i++){
		if(check(i) && (tangdan(i) || giamdan(i))){
			cnt++;
		}
	}
	cout<<cnt<<endl;
}
int main(){
	fast;
	int n; cin>>n;
	xuly(n);
	return 0;
}