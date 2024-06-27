// cho dãy a là chiều cao nam
// dãy b là chiều cao nữ 
// nam lớn hơn nữ +1 - in kết quả 

#include<bits/stdc++.h>
using namespace std;

int ans(int a[], int m, int b[], int n){
	int i=0,j=0;
	int cnt=0;
	while(i< m && j<n){
		if(a[i]<=b[j])
			++i;
		else {
			++cnt;
			++i;++j;
		}
	}
	return cnt;
}
int main(){
	int m, n; cin>>m>>n;
	int a[m], b[n];
	for(auto &x: a)
		cin>>x;
	sort(a,a+m);

	for(auto &x: b)
		cin>>x;
	sort(b,b+m);

	cout<<ans(a,m,b,n)<<endl;
	return 0;
}