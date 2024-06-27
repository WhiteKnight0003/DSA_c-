// ý tưởng - gặp ( thì thêm vào stack
// if empty = false => sai
// gặp ) xóa ( đi

#include<bits/stdc++.h>
using namespace std;

bool kt(string s, stack<char> &st){
   if(s[0]==')') 
   	   return false;
   for(auto x: s){
	    if(x=='(') st.push(x);
	    else {
	    	 if(st.empty())
	    	 	return false;
	   	  else st.pop();
	   }
     }
     if(!st.empty())
     	return false;
     return true;
}
int main(){
string s; cin>>s;
stack<char> st;
if(kt(s,st))
	cout<<"Y";
else cout<<"N";
return 0;
}