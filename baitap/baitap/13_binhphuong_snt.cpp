// cho 1 khoảng liệt kê các phần tử chia hết cho 1 snt và bình phương của no
#include<bits/stdc++.h>
using namespace std;
// chỉ cần 1 số chia hết cho bình phương 1 snt 
int analysis(int n){
	for(int i=2;i<=sqrt(n); i++){
		int cnt=0;
		if(n%i==0)
			while(n%i==0){
				++cnt;
				n/=i;
			}
		if(cnt>=2)
			return 1; // có 1 số có mũ lớn hơn 2 thỏa mãn
	}
	return 0;
}

// số tm phải chia hết cho các ước bình phương
int analysis2(int n){
	int test=0;
	for(int i=2;i<=sqrt(n); i++){
		int cnt=0;
		if(n%i==0)
			while(n%i==0){
				++cnt;
				n/=i;
			}
		if(cnt==1)
			return 0;
		if(cnt>=2)
			test=1;
	}
	if(n!=1)
	   return 0;

	return test;
}


int main(){
	int a; int b;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	 if(analysis(i))
		cout<<i<<" ";
	cout<<endl;

	for(int i=a;i<=b;i++)
	 if(analysis2(i))
		cout<<i<<" ";
	return 0;
}