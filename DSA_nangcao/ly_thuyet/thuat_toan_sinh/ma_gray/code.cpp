// chuyển xâu nhị phân sang mã gray
#include<bits/stdc++.h>
using namespace std;

/*
- bit đầu tiên của mã gray và mã nhị phân là giống nhau
- các bit còn lại ở vị trí i của mã gray có được bằng cách XOR 2 bit i , i-1 của xâu nhị phân 

xor : 
A ^ B = 
0 0    0
0 1    1
1 0    1
1 1    0
*/

int n, x[100], a[100] , ok;
void ktao(){
	for(int i=1;i<=n;i++){
		x[i]=0;
	}
}

void sinh(){
	int i=n;
	while(i>=1 && x[i] == 1){
		x[i]=0;
		--i;
	}
	if(i==0){
		ok=0;
	}
	else {
		x[i]=1;
	}
	a[1]=x[1];
	for(int i=2;i<=n;i++){
		a[i]=x[i]^x[i-1];
	}
}

int main(){
	cin>>n;
	ktao();
	ok=1;
	while(ok){
		for(int i=1;i<=n;i++)
			cout<<a[i];
		cout<<endl;
		sinh();
	}
	return 0;
}