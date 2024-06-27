#include<bits/stdc++.h>
using namespace std;

void deletestring(long long n){
	string str = to_string(n);
	for(int i=0; i<str.size()-2;i++)
		if(str[i] == '0' && str[i+1] =='8' && str[i+2] =='4')
			str[i] = str[i+1] = str[i+2] ='x';

	for(int i=0; i<str.size();i++)
		if(str[i] !='x')
			cout<<str[i];
	cout<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		deletestring(n);
	}
	return 0;
}