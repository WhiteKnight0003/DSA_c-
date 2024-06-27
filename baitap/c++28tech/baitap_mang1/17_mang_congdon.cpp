#include<bits/stdc++.h>
using namespace std;

// cho mảng a và l ,r tính tổng trong l, r
// ví dụ
// 2 3  8  6  4 1     a[i]
// 2 5 13 19 23 24    p[i]
// kq= p[i] - p[i-1];
int main(){
	int n; cin>>n;
	int a[n];
	for(auto &x: a)
		cin>>x;
	int prefix[n] ={0};

	for(int i=0;i<n;i++)
	   prefix[i] = prefix[i-1] + a[i];
	int q; cin>>q;
	while(q--){
		int l, r;
		cin>>l>>r;
		int sum = prefix[r]-prefix[l-1];
		cout<<sum<<endl;
	}
	return 0;
}

