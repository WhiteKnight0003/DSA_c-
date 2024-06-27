//số sphenic là số đc phân tích dưới dạng tích của 3 số khác nhau 
// ví dụ 30 là số sphenic 30 = 2*3*5
// 60 k phải vì 60 = 2*2*3*5 
// 1 là số tm   0 là k phải

#include<bits/stdc++.h>
using namespace std;

int analysis(int n){
	int ans=0;
	for(int i=2;i<=n;i++){
		int cnt=0;
		if(n%i==0)
			while(n%i==0){
				n/=i;
				cnt++;
			}
		if(cnt>1) 
			return 0;
		if(cnt==1) 
		      ans++;
	}
	if(n!=1)
		ans++;
	return ans;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		if(analysis(n) == 0)
			cout<<"0"<<endl;
		else cout<<"1"<<endl;
	}
	return 0;
}