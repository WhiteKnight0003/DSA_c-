// ví dụ 28 = 2*2*7  // k = 3 cout 7
#include<bits/stdc++.h>
using namespace std;

int analysis(int n, int k){
	int cnt=0;
	for(int i=2;i<=sqrt(n); i++){
		if(n%i==0)
			while(n%i==0){
				++cnt; 
				n/=i;
				if(cnt== k)
				return i;
			}
	}
	if(n!=1)
		++cnt;
	if(cnt== k)
		return n;
	return -1;

}

int main(){
	int n, k;
	cin>>n>>k;
	cout<<analysis(n,k)<<endl;
	return 0;
}