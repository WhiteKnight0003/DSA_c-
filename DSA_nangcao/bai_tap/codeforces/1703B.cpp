#include<bits/stdc++.h>
using namespace std;

/*
int xuly(string str, int k){
	int sum =0;
	multiset<char> s;
	for(int i=0;i<k;i++){
		if(s.find(str[i]) != s.end())
			sum+=1;
		else sum+=2;
		s.insert(str[i]);
	}
	return sum;
}
int main(){
	int n; cin>>n; cin.ignore();
	while(n--){
		int k; cin>>k;cin.ignore();
		string s; getline(cin,s);
		cout<<xuly(s,k)<<endl;
	}
	return 0;
}
*/



// Cach 2
// dùng set - thêm vào chỉ chứa 1 lần
// mà nộp đầu đc 2 quả bóng bay 
// nếu đã nộp chỉ đc 1 quả
// coi đầu tiên tất cả đều là 1 điểm - sau cón lại cũng sẽ là 1 điểm
// BAAAA  + BA = 7 
int main(){
	int q; cin>>q;
	while(q--){
		set<char> s;
		int k; cin>>k; cin.ignore();
		string str;
		getline(cin,str);
		for(auto x: str)
			s.insert(x);
		cout<<k+s.size()<<endl;
	}
	return 0;
}