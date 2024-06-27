#include<bits/stdc++.h>
using namespace std;

/*
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	map<int,int> a;
	for(int i=1;i<=n;i++){
		int x; cin>>x;
		a[x]++;
	}
	int max=-1e9;
	for(auto x: a)
		if(x.second>max)
			max= x.second;
	for(auto x: a)
		if(max==x.second){
			cout<<x.first<<" "<<max;
			      break;
		}
	return 0;
}
*/

/* tìm phần tử xh nhiều nhất - nếu bằng nhau in ra gt nhỏ hơn
int cnt[1000001]={0};// gán tất cả =0
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	int a[n];
	for(auto &x: a)
		cin>>x;

	for(int i=0;i<n;i++)
		cnt[a[i]]++;
	int dem =0, res;

	for(int i=0;i<n;i++){
		if(cnt[a[i]] >dem){
			dem=cnt[a[i]];
			res=a[i];
		}
		else if(cnt[a[i]] == dem){
			if(res>a[i])
				res=a[i];
		}
	}
	cout<<res<<" "<<dem;
	return 0;
}
*/

 /*tìm phần tử xh nhiều nhất - nếu bằng nhau in ra vị trí xh trc
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	int a[n];
	for(auto &x: a)
		cin>>x;
	int dem=0, res;
	for(int i=0;i<n;i++){
		int cnt=1; // chính là a[i]
		for(int j=i+1;j<n;j++)
		   if(a[i]==a[j])
			  ++cnt;
	    
	    if(dem<cnt){
	    	dem=cnt;
	    	res=a[i];
		}
	}
	cout<<res<<" "<<dem;
	return 0;
}
*/

// liệt kê số lần xh
int cnt[10000001]={0};
int main(){
	int n; cin>>n;
	int a[n];
	for(auto &x: a)
		cin>>x;
	for(int i=0;i<n;i++)
		++cnt[a[i]];

	for(int i=0;i<n;i++)
		if(cnt[a[i]]!=0){
			cout<<a[i]<<" "<<cnt[a[i]]<<endl;
			cnt[a[i]]=0;
		}
	return 0;
}