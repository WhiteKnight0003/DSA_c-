// số lộc phát là các số chỉ có 0 , 6, 8  
#include<bits/stdc++.h>
using namespace std;

int analysis(string str){
	for(int i=0; i< str.size(); i++)
		if(str[i] != '6' && str[i] != '8' && str[i] != '0')
			return 0;
	return 1;
}
int main(){
	int t; cin>>t;

	while(t--){
		string str;
		cin>>str;
	    if(analysis(str))
			cout<<"1"<<endl;
		else  
		    cout<<"0"<<endl;
	}
	return 0;
}