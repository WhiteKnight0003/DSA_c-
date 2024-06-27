// số hoàn hảo là số có tổng các ước (k tính bằng nó) = chính nó
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/* dùng cho test nhỏ thì đc
int analysis(ll n){
	int sum=1;
   for(int i=2;i<=sqrt(n); i++)
	if(n%i==0){
		if(i != n/i)
			sum += i+n/i;
		else 
		    sum += i;
	}
	if(sum == n)
		return 1;

	return 0;
}
*/

// khi 2 số liền nhau là snt 
// thì tích của chúng tạo ra 1 số hoàn hảo
// (2^p -1) * 2^(p-1) - p là snt
// 10^18 xấp xỉ 2^63 64 tức p chỉ nằm trong khoảng 1 ->32
int analysis(ll n){
	for(ll i =2 ; i<=sqrt(n); i++)
		if(n%i==0)
			return 0;
	return 1;
}

int check (ll n){
	for(int i=1; i<= 32; i++)
		if(analysis(i)){
			int temp= (int)pow(2,i)-1;
			if(analysis(temp)){
				ll kq = 1ll* temp* (int)pow(2,i-1);
				if(kq == n)
					return 1;
			}
		}
	return 0;
}

ll ans[10]; // gán số hoàn hảo vào chuỗi 
int m=0;
void kqq(){
	for(int i=1; i<=32; i++)
		if(analysis(i)){
			int temp=( int) pow(2,i) -1;
			if(analysis(temp))
				ans[m++] = 1ll*temp*(int) pow(2, i-1);
		}
}
/*
 int main(){
	int t;  cin>>t;
	while(t--){
		ll n;  cin>>n;
		if(check(n))
			cout<<"YES"<<endl;
		else 
		    cout<<"NO"<<endl;
	}
	return 0;
}
*/

int main(){
	kqq();
	int t;  cin>>t;
	while(t--){
		ll n;  cin>>n;
		int cnt=0;
		for(int i=0; i<m ;i++)
			if(ans[i] == n)
				++cnt;

		if(cnt==0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}