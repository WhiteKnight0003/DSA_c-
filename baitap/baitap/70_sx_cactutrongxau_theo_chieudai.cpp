#include<bits/stdc++.h>
using namespace std;

/* sắp xếp theo số kí tự và thứ tự kí tự
int cmp(const void *a, const void *b){
	char *x = (char *)a;
	char *y=  (char *)b;
	if(strlen(x) != strlen(y)){
		if(strlen(x)<strlen(y))  // nếu kích thước nhỏ hơn 
			return -1;
		return 1;
	}
	else{
		if(strcmp(x,y)<0) return -1; // xét thứ tự sắp xếp
			return 1;
	}
}
int main(){
	int t; cin>>t; 
	 getchar(); 
	while(t--){
		char c[1000];
		char a[20][50];
		gets(c);
		int n=0;
		char *token = strtok(c, " ");
		while(token != NULL){
			strcpy(a[n],token);
			++n;
			token= strtok(NULL, " ");
		}
		qsort(a, n, sizeof(a[0]), cmp);
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}
*/

int cmp(const void *a, const void *b){
	char *x = (char *)a;
	char *y=  (char *)b;
	if(*x < *y) // phải có * vì *x or *y thể hiện ký tự mà con trỏ đang trỏ tới  
		return -1;
	return 1;
}
int main(){
	int t; cin>>t; 
	 getchar(); 
	while(t--){
		char c[1000];
		gets(c);
		qsort(c, strlen(c) , sizeof(char), cmp);
		cout<<c<<endl;
	}
	return 0;
}

/*
1
abaazabc

- kq : aaaabbcz
 */