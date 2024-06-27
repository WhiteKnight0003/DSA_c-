#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
const ll MOD = 1e9+7;

// đvs số fibo thứ <= 10^6 t có thể quy hoạch động bằng c[i]- tổ hợp 
ll fi[1000001];
void fibo(){
	fi[0] = 0;
	fi[1] =1;
	for(int i=2;i<=1000000;i++){
		fi[i] = fi[i-1]+fi[i-2];
		fi[i]%=MOD;
	}
}

// // đvs số fibo thứ  > 10^6 t phải dùng lũy thừa ma trận
void nhan(ll a[2][2], ll b[2][2]){
	ll res[2][2];
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++){
			res[i][j]=0;
			for(int k=0;k<2;k++){
				res[i][j]+=a[i][k]*b[k][j];
				res[i][j] %=MOD; 
			}
		}
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			a[i][j]=res[i][j];
}

// ( 1  1 ) ^ n  ==  ( F(n+1)  Fn  ) 
// ( 1  0 )          ( Fn    F(n-1))    
void luythua(ll n){
	ll res[2][2] = {{1,0},{0,1}}; // 1 ma trận đơn vị 
	ll a[2][2] = {{1,1},{1,0}};
	while(n){
		if(n%2==1)
			nhan(res,a);
		nhan(a,a);
		n/=2;
	}
	cout<<res[0][1]<<endl;
}
int main(){
	fast;
	fibo();
	int n; cin>>n;
	luythua(n);
	cout<<fi[n]<<endl;
}