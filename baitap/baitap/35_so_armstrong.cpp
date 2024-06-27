// số armstrong là số có a chữ số thỏa mãn
// ví dụ 371 = 3^3 + 7^3+ 1^3

#include<bits/stdc++.h>
using namespace std;

int check(int n){
	string str=to_string(n);
	int size= str.size();
	return size;
}

int sum(int n){
	int temp=n;
	int sum =0;
	int rev = check(temp);
	while(n){
		sum+=pow((n%10), rev);
		n/=10;
	}

	if(sum== temp)
		return 1;
	return 0;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		if(sum(n))
			cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
	return 0;
}