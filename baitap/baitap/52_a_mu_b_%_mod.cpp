// (a*b)%c chạy nhanh nhất <=> ((a%c)*(b%c))%c
// bài toán x^y % m
#include<bits/stdc++.h>
using namespace std;

int powmod(int x, int y, int m){
	long long res=1;
	while(y){ // lặp y lần 
		if(y%2==1){
			res*=x;
			res%=m;
		}
		x*=x;
		x%=m;
		y/=2;
	}
	return res;
}

int powmod2(int x, int y, int m){ // lũy thừa nhị phân
	if(y==0)
		return 1;
	int tmp=powmod2(x,y/2, m);
	if(y%2==1)
		return (x%m * ((tmp%m)*(tmp%m)%m))%m;
	else 
	    return (tmp%m)*(tmp%m)%m;
}

int main(){
	int x,y,m;
	cin>>x>>y>>m;
	cout<<powmod(x,y,m)<<endl;
	return 0;
}