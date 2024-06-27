#include<bits/stdc++.h>
using namespace std;

int n, x[100], a[100],ok;

void ktao(){
	for(int i=1;i<=n;i++){
		x[i]=0;
	}
}

void sinh(){
	int i=n;
	while(i>=1 && x[i]==1){
		x[i]=0;
		--i;
	}
	if(i==0){
		ok= 0;
	}
	else {
		x[i]=1;
	}
}
bool cmp(string a, string b){
	if(a.size() != b.size())
	   return a.size()<b.size();
	return a<b;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	ktao();
	sinh();
	ok=1;
	vector<string> v;
	while(ok){
		string s="";
		for(int i=1;i<=n;i++){
			if(x[i]) s+=to_string(a[i])+" ";
		}
		v.push_back(s);
		sinh();
	}
	sort(v.begin(),v.end(),cmp);
	for(auto x: v){
		cout<<x<<endl;
	}
	return 0;
}