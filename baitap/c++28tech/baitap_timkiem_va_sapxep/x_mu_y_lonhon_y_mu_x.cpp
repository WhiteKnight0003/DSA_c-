// x<y => x^y > y^x

#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	vector<int> a(m),b(n);

	for(auto &x: a)
		cin>>x;
	sort(a.begin(),a.end());
	for(auto &x: b)
		cin>>x;
	sort(b.begin(),b.end());

	int cnt=0;
	for(int i=0;i<m;i++){
		auto it = upper_bound(b.begin(),b.end(), a[i]);
		if(it != b.end())
			cnt+=(it-b.begin());
	}

	cout<<cnt<<endl;
	return 0;
}