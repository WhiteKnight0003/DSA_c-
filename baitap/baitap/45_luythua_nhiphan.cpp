#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll pow1(int a, int b){
	if(b==0)
		return 1;
	ll x= pow1(a, b/2);
	if(b%2==1)
		return 1ll*x*x*a;
	else return 1ll*x*x;
}

ll pow2(int a, int b){
	ll res=1;
	while(b){
		if(b%2==1)
			res*=a; 
		b/=2;   
		a*=a;   
	}
	return res;
}
int main(){
	int a, b;
	cin>>a>>b;
	cout<<pow1(a,b)<<endl;
	return 0;
}


