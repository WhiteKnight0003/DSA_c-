#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// ví dụ n =3 k =7
// các số k chia hết cho 3
// 1 2 4 5 7 8 10 11 13
// số thứ 7 =10
// cứ n số có n-1 số k chia hết cho n
// tính k/(n-1) => ra số cụm 
// nếu k %n != 0   kq = (n+1)+k%n

int solve2(int n, int k){
	int cnt=0;
	for(int i=1; ;i++){
		if(i%n!=0)
			++cnt;
		if(cnt==k)
			return i;
	}
}
// ví dụ n =5 k =8
// 1 2 3 4 5 6 7 8 9 10 11
// 1 2 3 4 0 1 2 3 4 0
int solve(int n, int k){
	int x= k/(n-1);
	int r = k%(n-1);
	if(r==0) // là phần tử cuối cụm k/(n-1) 
		return 1ll*x*n-1;
	else 
	  return 1ll*x*n+r;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		cout<<solve(n,k)<<endl;
	}
	return 0;
}