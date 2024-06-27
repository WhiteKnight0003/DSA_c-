#include<bits/stdc++.h>
using namespace std;

/* code 1
void chuanhoa(char c[]){
	c[0]=tolower(c[0]);
	cout<<c[0];
}
int main(){
	int t; cin>>t;
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		char a[20][50];
		int n=0;
		char *token= strtok(c, " ");
		while(token != NULL){
			strcpy(a[n], token);
			++n;
			token = strtok(NULL, " ");
		}
		strlwr(a[n-1]);
		cout<<a[n-1];
		for(int i=0;i<n-1;i++)
			chuanhoa(a[i]);
		cout<<"@gmail.com"<<endl;
	}
	return 0;
}
*/


 //code 2

int main(){
	int t; cin>>t;
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		strlwr(c);
		char a[20][50];
		int n=0;
		char *token= strtok(c, " ");
		while(token != NULL){
			strcpy(a[n], token);
			++n;
			token = strtok(NULL, " ");
		}
		cout<<a[n-1];
		for(int i=0;i<n-1;i++)
			cout<<a[i][0];
		cout<<"@gmail.com"<<endl;
	}
	return 0;
}
