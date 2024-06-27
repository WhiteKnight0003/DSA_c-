// vừa đếm vừa in 
#include<bits/stdc++.h>
using namespace std;
#define end "\n"

const int nmax = 10000000;
int snt[nmax];

// sàng số nguyên tố 
void sang(){
	memset(snt,1,sizeof(snt));
	snt[0] = snt[1] = 0;
	for(int i=2;i<=sqrt(nmax);i++){
		if(snt[i]){
			for(int j=i*i;j<=nmax;j+=i){
				snt[j]=0;
			}
		}
	}
}

void checkchuso(){
	for(int i=2;i<=nmax;i++){
		if(snt[i]){
			int x = i;
			while(x!=0){
				int du = x%10;
				x/=10;
				if(!snt[du])
					snt[i]=0;
			}
		}
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	sang();
	checkchuso();
	int q;
	cin>>q;
	while(q--){
		int a,b;
		int count=0;
		cin>>a>>b;
		for(int i=a;i<=b;i++){
			if(snt[i]){
				cout<<i<<" ";
				count++;
			}
		}
		cout<<end<<count<<end;
	}
}