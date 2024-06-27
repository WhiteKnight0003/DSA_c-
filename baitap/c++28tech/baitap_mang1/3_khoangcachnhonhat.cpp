// a[i]- a[j]= min
// cho mảng a[n] // in ra số dương nhỏ nhất ch xuat hien
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a, a+n);
		int minn = INT_MAX;
		for(int i=1;i<n;i++)
				minn=min(minn, a[i]-a[i-1]);

		cout<<minn<<endl;
	}
	return 0;
}