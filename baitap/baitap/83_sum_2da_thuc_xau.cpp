#include<bits/stdc++.h>
using namespace std;

// ví dụ 2*x^5 gán cnt[5]= 2  // nếu giống mũ thì cộng hệ số 
int dt[10000], cnt=0;
void solve(char c[]){
	for(int i=0;i<strlen(c);i++)
		if(isdigit(c[i])){
			int tmp=0;
			while(c[i] != '*'){
				tmp=tmp*10+c[i]-'0';
				++i;
			}
			i+=3; // nhảy hệ số từ * đến số (*x^)
			int mu=0;
			while(c[i]!=' '){
				mu=mu*10+c[i]-'0';
				++i;
			}
			dt[mu] +=tmp;
		}
}
int main(){
	int t; cin>>t;
	while(t--){
	char a[1000];
	gets(a);
	char b[1000];
	gets (b);
	memset(dt, 0, sizeof(dt));
	cnt=0;
	solve(a); solve(b);
	for(int i=10000;i>=0;i--)
		if(dt[i]) ++cnt;
	for(int i=10000;i>=0;i--){
		if(dt[i]!=0) 
			cout<<dt[i]<<"*x^"<<i;
		--cnt;
		if(cnt!=0)
			cout<<" + ";
	}
	cout<<"\n";
}
return 0;
}