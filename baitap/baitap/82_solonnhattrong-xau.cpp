#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	getchar();
	while(t--){
		char c[100001];
		gets(c);
		int res =-1e9;
		for(int i=0;i<strlen(c);i++){
			int cnt=0;
		    while(i< strlen(c) && isdigit(c[i])){
				cnt=cnt*10+c[i]-'0';
				++i;
		    }
			if(res<cnt)
				res = cnt;
		}
		cout<<res<<endl;
	}
	return 0;
}