#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b;
	cin>>a>>b;
	cout<<__gcd(a,b)<<endl;
	cout<<a*b/__gcd(a,b)<<endl;
	return 0;
}