#include<bits/stdc++.h>
using namespace std;

#define tien_chung main

tien_chung(){
	int n; cin>>n;
	int a[n];
	for(auto &x: a)
		cin>>x;
	int max_value=-1e9;
	for(int i=0;i<n;i++){
		int sum=0;
		if(a[i]>0){
			sum+=a[i];
			max_value=max(max_value,sum);
		}
		else sum=0;
	}
	cout<<max_value;
}