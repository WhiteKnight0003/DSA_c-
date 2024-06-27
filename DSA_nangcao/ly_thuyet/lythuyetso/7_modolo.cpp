/*
(A + B ) % m = (A % m + B % m) % m
(A - B ) % m = (A % m - B % m) % m
(A * B ) % m = (A % m * B % m) % m
(A ^ B ) % m = ( (A % m )^ B ) % m
(A / B ) % m = ( (A % m )* B^-1 ) % m
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	cin>>a>>b;
	cout<<((a%6)-(b%6))%6<<endl;
	cout<<(-5)%6<<endl;
	return 0;
}