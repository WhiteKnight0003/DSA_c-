// strtok(str , sep); tách chuỗi thành các chuỗi con khi gặp kí tự 
// sep : separator : ví dụ " ", "\n" , ...

#include<bits/stdc++.h>
using namespace std;

/*
int main(){
	char c[1000];
	gets(c);
	char *token= strtok(c," ");
	int cnt=0;
	while(token != NULL){ // khi khác con trỏ NULL
		++cnt;
			cout<<token<<"\n";
		token = strtok(NULL, " ");
	}
	cout<<cnt;
	return 0;
	
Pythin
Java
c++
PHP
4
}*/


int check(char c[]){ // nếu 1 sâu con tách ra có kí tự thường thì sai
	for(int i=0;i<strlen(c);i++)
		if(!isupper(c[i])) // ký tự k phải kí tự in hoa 
			return 0;
	return 1;
}

int main(){
	int t; cin>>t;
	getchar(); // đọc dấu "\n" trong scanf
	while(t--){
		char c[1000];
		gets(c);
		char *token = strtok(c, " ");
		while(token != NULL){
			if(check(token))
				cout<<token;
			token = strtok(NULL, " ");
		}
		cout<<endl;
		return 0;
	}
}