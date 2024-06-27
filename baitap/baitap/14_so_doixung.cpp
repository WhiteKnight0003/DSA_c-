
#include<bits/stdc++.h>
using namespace std;

int tn(string str){
	int l=0; int r=str.size()-1;
	while(str[l] != str[r]){
		return 0;
	++l;
	--r;
}
	return 1;
}
int main(){
	int t; cin>>t;
	while(t--){
		string n;
		cin>>n;
		if(tn(n))
			cout<<"YES"<<endl;
		else 
		    cout<<"NO"<<endl;
	}
return 0;
}
