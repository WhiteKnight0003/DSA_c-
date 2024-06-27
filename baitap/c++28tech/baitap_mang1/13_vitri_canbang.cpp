#include<bits/stdc++.h>
using namespace std;
// ý tưởng
int summ(int n , int a[]){
	int sum=0;
	for(int i=0;i<n;i++)
		sum+=a[i];
	int left=0;
	for(int i=0;i<n;i++){
		sum-=a[i];// tổng trừ
		if(sum==left)
			return i;
		left +=a[i]; // cộng từ trái vào
	}
	return -1;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<summ(n,a)<<endl;
	}
	return 0;
}