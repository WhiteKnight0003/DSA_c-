#include<bits/stdc++.h>
using namespace std;

const int nmax = 1000000;
int snt[nmax];

void sang(){
	memset(snt,1,sizeof(snt));
	snt[0] = snt[1] =0;
	for(int i=2;i<=sqrt(nmax);i++){
		if(snt[i]){
			for(int j=i*i;j<=nmax;j+=i){
				snt[j]=0;
			}
		}
	}
}

int timuoc(int x){
	if(x==1)
		return 1;
	else if(x%2!=0){
		for(int i=3;i<=x;i+=2){
			if(snt[i] && x%i==0){
				return i;
				break;
			}
		}
	}
	return 2;
}

int main(){
	int q; cin>>q;
	sang();
	while(q--){
		int n; cin>>n;
		for(int i=1;i<=n;i++){
			cout<<i<<" "<<timuoc(i)<<endl;
		}
		cout<<endl;
	}
	return 0;
}