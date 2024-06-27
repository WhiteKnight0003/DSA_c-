#include<bits/stdc++.h>
using namespace std;

int p[1000001];  // duyệt mảng với bội các số nt
// các số nt có phi hàm euler bằng chính nó trừ 1 
// ví dụ phi hàm của 3 = 2
void sieve(){
	for(int i=1;i<=1000000; i++)
		p[i]=i;
	for(int i=2;i<=1000000; i++){
		if(p[i]==i){   // i là snt
			p[i]= i-1;
			for(int j=2; j<=1000000; j+=i)
				p[j]-=p[j]/i;  // ví dụ i=2 j =4 ,6,8 lấy bội trừ đi 
		}

	}
}
int main(){
	int t; cin>>t;
	sieve();
	while(t--){
		int n; cin>>n;
		for(int i=1;i<=n;i++)
			cout<<p[i]<<" ";
	}
	return 0;
}