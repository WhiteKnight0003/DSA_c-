#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		int cnt[26]={0};
		for(int i=0;i<strlen(c);i++)
			cnt[c[i]-'A']++; // trừ 'A' hay lùi chỉ số mã asII
		for(int i=0;i<26;i++)
			if(cnt[i]==1)
				cout<<(char)(i+'A'); // +'A' hay + mã asI
		cout<<endl;
	}
	return 0;
}