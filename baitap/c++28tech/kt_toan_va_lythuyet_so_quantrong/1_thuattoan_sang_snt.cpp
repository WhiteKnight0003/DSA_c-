#include<bits/stdc++.h>
using namespace std;

// nếu muốn sàng các snt k vượt quá n
// ta cần tạo 1 mảng có kích thước n+1 phần tử

int prime[1000001];
void sieve(){
	memset(prime , 1, sizeof(prime));
	prime[0] = prime[1] = 0; // loại 0 và 1
 	for(int i=2;i<=1000;i++)
		if(prime[i])  // nếu i là snt
			for(int j=i*i; j<=1000000;j+=i) // duyệt tất cả các bội của i và cho no k phải snt
				prime[j]=0; // j k còn là snt
}
int main(){
	int n; cin>>n;
	sieve();
	for(int i=0;i<n;i++)
		if(prime[i])
			cout<<i<<" ";
	return 0;
}