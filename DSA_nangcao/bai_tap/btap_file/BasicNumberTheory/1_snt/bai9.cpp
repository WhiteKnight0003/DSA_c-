#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a,b;
	cin>>a>>b;

	for(int i=a;i<=b-1;i++){
		for(int j=i+1;j<=b;j++){
			if(__gcd(i,j)==1)
				cout<<"( "<<i<<","<<j<<" )"<<endl;
		}
	}
return 0;
}