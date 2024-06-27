#include<bits/stdc++.h>
using namespace std;
#define ll long long
// sắp xếp theo thứ tự 2 3 5 7
void analysis(ll n){
	ll temp=n;
	int count1=0;
	int count2=0;
	int count3=0;
	int count4 =0;
	string str = to_string(n);
	for(int i=0;i <str.size(); i++){
		if(str[i] == '2')
			++count1;
		if(str[i] == '3')
			++count2;
		if(str[i] == '5')
			++count3;
		if(str[i] == '7')
			++count4;
	}

	for(int i=str.size()-1 ; i>=0 ;i--){
		if(str[i] == '2' && count1!=0) {
			cout<<"2 "<<count1<<endl;
			count1=0; // gán = 0 cho nó k lặp lại
		}

		if(str[i] == '3' && count2!=0) {
			cout<<"3 "<<count2<<endl;
			count2=0; 
		}
		if(str[i] == '5' && count3 !=0) {
			cout<<"5 "<<count3<<endl;
			count3=0; 
		}

		if(str[i] == '7' && count4!=0) {
			cout<<"7 "<<count4<<endl;
			count4=0; 
		}
	}
}
int main(){
	ll n; cin >>n ;
	analysis(n);
	return 0;
}