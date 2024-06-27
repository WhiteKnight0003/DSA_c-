#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
const int mod = 1e9+7;


ll res(string s){
	int b = s[s.size()-1]-'0';
	int b1 = s[s.size()-2]-'0';
	int num=b1*10+b;
	if(num%4==0)
		return 4;
	return 0;
}

int main(){
	string s;
	cin>>s;
	cout<<res(s);
	return 0;
}