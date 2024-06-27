#include<bits/stdc++.h>
using namespace std;

// nCk = (n-1)C(k-1) + (n-1)Ck
// làm bài bằng quy hoạch động
const int mod = (int) 1e9+7;
int C[1000][1000]; // tổ hợp chập j của i

void sieve(){
	for(int i=0;i<=1000;i++)
		for(int j=0;j<=i;j++){
			if(j==0 || i==j)
				C[i][j] =1;
			else {
				C[i][j] = C[i-1][j] + C[i-1][j-1];
				C[i][j] %= mod;
			}
		}
}

int main(){
	int t; cin>>t;
	sieve();
	while(t--){
		int n;int k; cin>>n>>k;
		cout<<C[n][k]<<endl;
	}
	return 0;
}