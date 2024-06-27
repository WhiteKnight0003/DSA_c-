#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int q; cin>>q;
	while(q--){
		int k;cin>>k;
		vector<int> s(k);
		vector<int> f(k);
		for(int i=0;i<k;i++)
			cin>>s[i];

		for(int i=0;i<k;i++)
			cin>>f[i];
		
		int max = s[0];
		for(int i=0;i<k;i++){
			cout<<f[i]-max<<" ";
			if(f[i] > s[i+1])
				max = f[i];
			else max = s[i+1];
		}
		cout<<endl;
	}
	return 0;
}