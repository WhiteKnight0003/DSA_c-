#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	stack<int> st;
	while(1){
		int s=n%2;
		st.push(s);
		n/=2;
		if(n==0)
			break;
	}
	while(!st.empty()){
		cout<<st.top();
		st.pop();
	}
	return 0;
}