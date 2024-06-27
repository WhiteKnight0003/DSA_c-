#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	int b[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];// a chạy từ 1    1 2 3 4 5
		b[n-i]=a[i];// b chạy từ 0  5 4 3 2 1 
	}
	long long sum1=0,sum2=0, sum3=0;
	for(int i=1;i<=n;i++){
		sum1+=pow(a[i],2);
		sum2+=a[i]*b[i-1];
	}
	for(int i=2;i<=n;i++)
		sum3+=a[i]*a[i-1];
	cout<<sum1<<"\n"<<sum2<<"\n"<<sum3;
}

//a[2] = b[4]
//2 +6 +12 + 20