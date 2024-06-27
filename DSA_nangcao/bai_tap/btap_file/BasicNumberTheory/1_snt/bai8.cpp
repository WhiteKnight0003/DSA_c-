#include<bits/stdc++.h>
using namespace std;

#define For(i,a,b) for(int i=a;i<=b;i++)
#define endl "\n"

const int nmax = 10000000;
int snt[nmax];

void sang(){
	memset(snt,1,sizeof(snt));
	snt[0] = snt[1] = 0;
	For(i,2,sqrt(nmax)){
		if(snt[i]){
			for(int j=i*i;j<=nmax;j+=i){
				snt[j] =0;
			}
		}
	}
}

int checkchuso(int x){ // 2 5 5 7
	while(x){
	int so = x%10;
	if(!snt[so]){
	    return 0;
	     break;
	}
	x/=10;
    }
    return 1;
}

int tong(int x){
	int sum=0;
    while(x){
	int so = x%10;
	sum+=so;
	x/=10;
    }
	return sum;
}

int main(){
	int q; cin>>q;
	sang();
	while(q--){
		int a, b;
		int count=0;
		cin>>a>>b;
		For(i,a,b){
			if(snt[i] && snt[tong(i)] && checkchuso(i)){
				cout<<i<<" ";
				count++;
			}
		}
		cout<<endl<<count<<endl;
	}

	return 0;
}