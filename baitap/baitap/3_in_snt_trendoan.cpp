#include<bits/stdc++.h>
using namespace std;

// phải tạo 1 mảng có kích thước r-l+1 
/* (l+i-1)/i)*i   tìm bội của 1 số hạng i >= l  ví dụ i=5;l=36 =>> ct = 40 - đảm bảo cho l chẵn or lẻ*/
void sang(int l, int r){
	int prime[r-l+1];
	memset(prime, 1, sizeof(prime));

	for(int i=2;i<=sqrt(r);i++) 
		for(int j= max(i*i, ((l+i-1)/i)*i )   ; j<=r; j+=i)
			prime[j-l]=0;

	for(int i=max(l,2); i<=r;i++)
		if(prime[i-l])
			cout<<i<<" ";
}

int main(){
	int l,r;
	cin>>l>>r;
	sang(l,r);
	return 0;
}