#include<bits/stdc++.h>
using namespace std;

string s;
bool ok = true;
int x[1000];
void ktao(){
	int num = s.size();
	for(int i=1;i<=num;i++){
		x[i] = s[i-1]-'0';
	}
}

void sinh(){
	int num = s.size();
	while(num>=1 && x[num] ==1){
		x[num]=0;
		--num;
	}
	x[num]=1;
	if(num==0){
		for(int i=1;i<=s.size();i++)
			x[i]=0;
	}
}

int main(){
	int n; cin>>n; cin.ignore();
	while(n--){
		getline(cin,s);
		ktao();
		sinh();
		for(int i=0;i<s.size();i++)
			cout<<x[i+1];
		cout<<endl;
	}
	return 0;
}