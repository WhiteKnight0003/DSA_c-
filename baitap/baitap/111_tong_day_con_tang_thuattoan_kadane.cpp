// pp kadane - dùng quy hoạch động 
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	for(auto &x: a)
		cin>>x;
	
	long long sum1 =0, sum2=-1e9;
	for(int i=0;i<n;i++){
		sum1 += a[i];
		sum2 = max(sum1,sum2);
		if(sum1<0) sum1=0;
	}
	cout<<sum2<<endl;
	return 0;
}
/*
5
1 2 -9 3 5
1 3 0 3 5 
*/