// số thuần nguyên tố là số nguyên tố có các chữ số và tổng các chữ số = 1 số nguyên tố
#include<bits/stdc++.h>
using namespace std;

int prime(int n){
	if(n<=1)
		return 0;
	for(int i=2;i<n;i++)
		if(n%i==0)
			return 0;
	return 1;
}

int kt_(int n){
	int sum=0;
	while(n){
		int r=n%10;
		sum+=r;
		if(r !=2 && r != 3 && r!= 5 && r!=7)
			return 0;
		n=n/10;
	}
	return prime(sum);
}


int main(){
	int t; cin>>t;
	while(t--){
		int l, r;
		cin>>l>>r;
		int cnt=0;
		for(int i=l;i<=r;i++)
			if(prime(i) && kt_(i))
				cnt++;

		cout<<cnt<<endl;
	}
	return 0;
}