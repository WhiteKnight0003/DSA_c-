#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
	if(n<=1)
		return false;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}

bool digitprime(int n){
	while(n){
		int r=n%10;
		if(r !=2 && r!=3 && r!=5 && r!=7 ) // phải dùng && vì nếu dùng || thhif chỉ 1 cái đúng sẽ đúng hết 
		     return false;
			n=n/10;
	}
	return true;
}

int main(){
	int n; cin>>n;
	while(n--){
		int cnt=0;
		int l,r;
		cin>>l>>r;
		for(int i=l; i<=r;i++)
			if( digitprime(i) && prime(i) ) // đảo đk để vòng lặp nhanh hơn
				cnt++;
		cout<<cnt<<endl;
	}
	return 0;
}