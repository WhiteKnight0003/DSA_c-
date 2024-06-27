#include<bits/stdc++.h>
using namespace std;
// dùng hàm strstr(str, keyword)  - tìm ký tự trong chuỗi 
// strstr (str, chr) - tìm xâu con tr0ng chuỗi
// hàm trả về kq con trỏ 
int main(){
	char a[1000];
	gets(a);
	char b[100];
	gets(b);
	
	if(strstr(a,b)==NULL)
		cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}