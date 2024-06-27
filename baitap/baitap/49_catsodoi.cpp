#include<bits/stdc++.h>
using namespace std;

void analysis(int n){
	string str = to_string(n);
	int check=0;
	for(int i=0; i< str.size(); i++){
		if(str[i] =='1') check =1;
		else 
			if(!(str[i] =='0' || str[i] =='8' || str[i] =='9')){ // nếu k nằm trong phạm vi cả 3 cái thì k tm
				check=0;
				break;
			}
	}

	if(check==0 ){
		cout<<"INVALID"<<endl;
		return ;
	}
	
	check=0;

	for(int i=0; i<str.size(); i++){
		if(str[i]== '1'){
			cout<<"1";
			check=1;
		}

		else if(check!=0)
			cout<<"0";
	}
    cout<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		analysis(n);
	}
	return 0;
}
