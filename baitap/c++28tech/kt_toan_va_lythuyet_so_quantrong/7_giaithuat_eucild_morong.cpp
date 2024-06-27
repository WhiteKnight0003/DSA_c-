// tính gcd của 2 số a và b bằng cách biểu diễn
// a*x + b*y = gcd(a,b);

#include<bits/stdc++.h>
using namespace std;

int x, y;
int gcd(int a, int b){
	if(b==0){
		x=1;
		y=0;
		return a;
	}
	int d= gcd(b,a%b);
	int tmp=x;
	x=y;
	y=tmp-y*(a/b);
	return d;
}

int main(){
	int a, b;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;
	cout<<x<<" "<<y;
	return 0;
}