/* chia hết cho 6
#include<bits/stdc++.h>
using namespace std;

int check(char c[]){
	if((c[strlen(c)-1] - '0') %2 == 1) // kí tự cuối cùng phải chia hết cho 2
		return 0;
	int sum =0;
	for(int i=0;i<strlen(c);i++)
		sum+= c[i]-'0';
	if(sum%3==0)
		return 1;
	return 0;
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
*/

/* chia hết cho 4
#include<bits/stdc++.h>
using namespace std;

int check(char c[]){
	if(strlen(c)==1){
		if((c[0]-'0')%4==0)
			return 1;
		return 0;
	}

	int x = (c[strlen(c)-2] -'0')*10 +(c[strlen(c)-1] -'0');
	if(x%4==0)
		return 1;
	return 0;
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
*/

/* chia hết cho 25
#include<bits/stdc++.h>
using namespace std;

int check(char c[]){
	if(strlen(c)==1)
		return 0;
	int x= (c[strlen(c)-2] -'0')*10 + (c[strlen(c)-1] -'0');
	if(x != 00 && x!= 25 && x!= 50 && x!= 75 )
		return 0;
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
*/
// chia hết cho 8 = 4*2
#include<bits/stdc++.h>
using namespace std;

int check(char c[]){
	int n= strlen(c);
	if(n==1){
		if(c[n-1]=='8') 
			return 1;
		return 0;
	} else 
	if(n==2){
		int tmp= (c[0]-'0')*10 + c[1]-'0';
		if(tmp%8==0)
			return 1;
		return 0;
	}

	int x = (c[n-3]-'0')*100+(c[n-2] -'0') *10 + (c[n-1] -'0');
	if(x%8==0)
			return 1;
		return 0;
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