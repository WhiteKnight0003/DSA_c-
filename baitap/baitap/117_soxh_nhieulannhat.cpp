#include<bits/stdc++.h>
using namespace std;


int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		int max=0;
		int cnt[30002]={0};
		for(int i=0;i<n;i++){
			cin>>a[i];
			cnt[a[i]]++;
		}
		for(int i=0;i<n;i++){
			if(cnt[a[i]]>max)
				max=cnt[a[i]];
		}
		for(int i=0;i<n;i++){
			if(max==cnt[a[i]]){
				cout<<a[i]<<" ";
			cnt[a[i]]=0;
			}
		}
		cout<<endl;
	}
	return 0;
}