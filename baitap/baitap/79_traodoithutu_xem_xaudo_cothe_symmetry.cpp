#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		int cnt[256]={0};
		for(int i=0;i<strlen(c);i++)
			cnt[c[i]]++;
		int res =0;
		for(int i=0;i<256;i++)
			if(cnt[i]%2==1)
				++res;
		if(res<=1)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}