// mảng A ở chỉ số lẻ B chẵn A tăng dần B giảm dần
#include<bits/stdc++.h>
using namespace std;

int cmp(const void *a, const void *b){
	return *(int*)b-*(int*)a;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n],b[n];
		for(auto &x: a)
			cin>>x;
		for(auto &x: b)
			cin>>x;
		sort(a,a+n);
		qsort(b,n, sizeof(int),cmp);

		/*
		int cnt[2*n];
		int i=0,j=0,c=0,l=1;
		while(c<2*n){
			cnt[c]=a[i];
			cnt[l]=b[j];
			c+=2;
			l+=2;
			++i;
			++j;
		}
		for(int i=0;i<2*n;i++)
			cout<<cnt[i]<<" ";
			*/

		for(int i=0;i<n;i++)
			cout<<a[i]<<" "<<b[i]<<" ";
		cout<<endl;
	}
	return 0;
}