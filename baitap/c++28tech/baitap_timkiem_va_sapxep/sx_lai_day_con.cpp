#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t; 
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=1;i<=n;i++)
			cin>>a[i];

		int l ;
		for(int i=2;i<=n;i++)
			if(a[i-1]>a[i]){
				l=i-1;
				break;
			}
		
		int r;
		for(int i=n;i>0;i--)
			if(a[i-1]>a[i]){
				r=i;
				break;
			}
	auto max = *max_element(a+l, a+r+1);
	auto min= *min_element(a+l, a+r+1);
	for(int i=1;i<=l;i++)
		if(a[i]>min){
			l=i;
			break;
		}

	for(int i=n-1;i>=r;i--)
		if(a[i]<max){
			r=i;
			break;
		}

		cout<<l<<" "<<r<<endl;
	}
	return 0;
}