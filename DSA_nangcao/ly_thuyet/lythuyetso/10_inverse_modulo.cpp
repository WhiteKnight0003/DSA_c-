// A/B %m =( (A % m) * B^-1 ) % m

#include<bits/stdc++.h>
using namespace std;

// nghịch đảo modulo = euclid mở rộng

int x,y,d;
void extended(int a, int b){
	if(b==0){
		x=1;
		y=0;
		d=a;
	}
	else{
		extended(b,a%b);
		int tmep = x;
		x=y;
		y=tmep - a/b*y;
	}
}



void inverse(int a, int m){
	extended(a,m);
	if(d!=1) cout<<"Khong ton tai !"<<endl;
	else {
		cout<<((x%m) +m)%m<<endl;
	}
}
// nghịch đảo moduno với số lớn bằng snt
#define ll long long
ll powmod(ll a, ll b, ll mod){
	ll res =1;
	a%=mod;
	while(b){
		if(b%2==1){
			res*=a;
			res%=mod;
		}
		a*=a;
		a%=mod;
		b/=2;
	}
	return res;
} 

ll inverse_1(ll a, ll m){
	return powmod(a,m-2, m);
}
//const int mod = 1e9+7;
int main(){
	inverse(-5,12);
	cout<<inverse_1(5,11)<<endl;
	return 0;
}




























































































