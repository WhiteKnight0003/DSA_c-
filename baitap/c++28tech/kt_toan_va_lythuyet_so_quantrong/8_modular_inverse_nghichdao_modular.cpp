#include<bits/stdc++.h>
using namespace std;

int x,y;

int gcd(int a, int b){
	if(b==0){
		x=1;
		y=0;
		return a;
	}
	int d = gcd(b,a%b);
	int tmp =x;
	x=y;
	y=tmp-y*(a/b);
	return d;
}

void inverse(int a, int m){
	if(gcd(a,m) !=1) cout<<"k ton tai";
	else cout <<(x%m +m) %m;
}

int main(){
	inverse(5,9);
	return 0;
}