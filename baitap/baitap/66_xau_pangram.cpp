
#include<bits/stdc++.h>
using namespace std;

// xâu pangram là 1 xâu chứa đầy đủ các ký tự in thường từ a->z
int pangram1(char a[]){
	char s[1002];
	strcpy(s,a);
	strlwr(s);
	if(strcmp(s,a)==0)
		return 1;    /// absccc
	return 0; 
}
// xâu pangram là 1 xâu chứa đầy đủ các ký tự  a->z 
// k phân biệt hoa thường
int pangram2(char a[]){
	char s[1001];
	strcpy(s,a);
	strlwr(s);
	if(strcmp(s,a)!=0)
		return 1;
	return 0;
}
int main(){
	char a[1002];
	gets(a);
	if(pangram2(a))
		cout<<"pangram"<<endl;
	else cout<<"k phải pangram"<<endl;
}