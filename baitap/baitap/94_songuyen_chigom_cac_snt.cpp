/* 1 xâu toàn các snt và sum của chúng % 10 ==0
#include<bits/stdc++.h>
using namespace std;

int solve(char c[]){
	int sum =0;
	for(int i=0;i<strlen(c);i++){
		int x=c[i]-'0';
		if(x !=2&& x !=3 && x !=5 && x !=7)
			return 0;
		sum +=x;
	}
	if(sum %10==0)
		return 1;
	return 0;
}

int main(){
	int t; cin>>t; 
	while(t--){
		char c[1000];
		cin>>c;
		if(solve(c))
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;	
}
*/


/*1 xâu toàn các snt và nó = số nghịch đảo*/

#include<bits/stdc++.h>
using namespace std;

int check(char c[]){	
	int l=0;
	int r = strlen(c)-1;
	while(l<=r){
		if(c[l] != c[r]) return 0;
		if(c[l] != '2' && c[l] != '3' && c[l] != '5' && c[l] != '7' )
			return 0;
		++l; -- r;
	}
	return 1;
}

int main(){
	int t; cin>>t;
	while(t--){
		char c[1000];
		cin>>c;
		if(check(c))
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}