#include<bits/stdc++.h>
using namespace std;
/*
int main(){
	char c[1000];
		gets(c);
	char re[50];
	scanf("%s",&re);
	char a[20][50];
	int n=0;
	char *token = strtok(c ," ");
	while(token != NULL){
		if(strcmp(re, token) !=0){
		strcpy(a[n], token);
		++n;
	}
		token = strtok(NULL," ");
	}

	for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
	}
	return 0;
}
*/

int strcmp1(char a[], char b[]){
	int n1= strlen(a);
	int n2= strlen(b);
	if(n1 != n2 ) return 0;
	for(int i=0;i<n1;i++)
		if(tolower(a[i]) != tolower(b[i]))
			return 0;
	return 1;
}
int main(){
	int t; cin>>t;
	getchar();
	for(int i=1;i<=t;i++){
		char c[1000];
		gets(c);
		char xoa[50];
		gets(xoa);
		//cin>>xoa;
		char *token = strtok(c," ");
		cout<<"#Test "<<i<<" : ";
		while(token != NULL){
			if(strcmp1(token,xoa)==0)
			   cout<<token<<" ";
			token =strtok(NULL," ");
		}
		cout<<endl;
	}
	return 0;
}