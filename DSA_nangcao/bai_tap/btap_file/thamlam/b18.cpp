#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;

		// 4x+7y=n

		int res4;
		int check=0;
		for(int i=n/7;i>=0;i--){
			if((n-7*i)%4==0){
				res4 = (n-7*i)/4;
				check=1;
				break;
			}
		}
		if(check==0){
			cout<<"-1"<<endl;
			break;
		}
		int res7=(n-res4*4)/7;
		for(int i=0;i<res4;i++){
			cout<<"4";
		}
		for(int i=0;i<res7;i++){
			cout<<"7";
		}
		cout<<endl;
	}
	return 0;
}