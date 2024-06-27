#include<bits/stdc++.h>
using namespace std;

int solve(char c[]){
	char d[5]={'h', 'e', 'l', 'l', 'o'}; // tìm đc 'h' r ms tìm 'e'
	int cnt=0; // chỉ số phần tử xâu d
	for(int i=0;i<strlen(c);i++){
		if(c[i] == d[cnt]) // kí tự hiện tại ở xâu c có bằng kí tự cần tìm ở xâu d
			++cnt;
		if(cnt==5) return 1; // co thể tạo xâu hello
	}
	return 0;
}
int main(){
	char c[1000];
	cin>>c;
	if(solve(c))
	cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
	return 0;
}