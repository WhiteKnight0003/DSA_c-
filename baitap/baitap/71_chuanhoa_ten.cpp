#include<bits/stdc++.h>
using namespace std;

void chuanhoa(char c[]){
	c[0]= toupper(c[0]);
	for(int i=1;i<strlen(c);i++)
		c[i] = tolower(c[i]);
}
int main(){
	int t; cin>>t;
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		char a[20][50];
		int n=0;
		char *token = strtok(c, " ");
		while(token != NULL){
			strcpy(a[n], token);
			++n;
			token=strtok(NULL, " ");
		}
		/*
		for(int i=0;i<n;i++){
			chuanhoa(a[i]);
			cout<<a[i]<<" ";
			if(i!= n-1) cout<<" ";
		}
		*/
		//chuanhoa(a[n-1]);
		strupr(a[n-1]); // viết hoa 1 xâu 
		cout<<a[n-1]<<", ";
		for(int i=0;i<n-1;i++){
			chuanhoa(a[i]);
			cout<<a[i]<<" ";
		//	if(i!= n-1) cout<<" ";
		}

		cout<<endl;
	}
	return 0;
}