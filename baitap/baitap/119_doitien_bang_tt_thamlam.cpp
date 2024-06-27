#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	int a[10]={1000, 500, 200, 100, 50 , 20,10,5,2,1};
	int cnt=0;
	for(int i=0;i<10;i++){
		cnt+=n/a[i];
		n%=a[i]; 
	}
	cout<<cnt;
	return 0;
}