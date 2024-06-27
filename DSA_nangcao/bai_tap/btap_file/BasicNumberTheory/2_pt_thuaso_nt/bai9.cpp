#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define For(i,a,b) for(int i=a;i<=b;i++)

bool tinh(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int count =0;
			while(n%i==0){
				n/=i;
				count++;
			}
			if(count>=2)
				return true;
		}
	}
	return false;
}
int main(){
	int a,b;
	cin>>a>>b;
	For(i,a,b){
		if(tinh(i))
			cout<<i<<" ";
	}
	return 0;
}