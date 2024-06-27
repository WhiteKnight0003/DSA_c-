// có n con bò để vắt sữa
// con bò thứ i cho a[i] lít sữa 
// mỗi lần vắt sữa 1 con những con khác thấy sợ sẽ mất 1 lít 
// tính xem thứ tự vắt sữa ntn thì đc nhiều sữa nhất

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a[n];
	for(auto &x: a)
		cin>>x;
	sort(a,a+n,greater<int>());

	int sum=0;
	for(int i=0;i<n;i++){
		if(a[i]>i)
			sum+=a[i]-i; // 1 con hết sữa => tất cả con sau cũng hết
		else break;
	}
	cout<<sum<<endl;
	return 0;
}
9 7 12 8 6 5
    9         5 
  7  12     6  9
8  6  5   8  7 12  