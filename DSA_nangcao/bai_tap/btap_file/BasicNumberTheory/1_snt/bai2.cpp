#include<bits/stdc++.h>
using namespace std;

const int nmax = 10000001;
int snt[nmax];

void sang(){
	// đặt tất cả bằng 0
	memset(snt , 1 , sizeof(snt));
	snt[0]=  snt[1] = 0; //0 và 1 không đúng
	for(int i=2;i<=sqrt(nmax);i++){
		if(snt[i]){
			// duyệt j là các bội số của i - nếu là bội thì sai
			for(int j=i*i;j<=nmax; j+=i){
				snt[j] = 0;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n; cin>>n;
	sang();
	for(int i=0;i<=n;i++)
		if(snt[i])
			cout<<i<<" ";
	return 0;
}