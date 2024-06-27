#include<bits/stdc++.h>
using namespace std;

int main(){
	char c[1005];
	gets(c); // nhập chuỗi 
	strlwr(c);  // chuyển chuỗi từ hoa về thường - trả kq về luôn chuỗi đó
	
    int cnt1=0, cnt2=0;
    for(int i=0;i<strlen(c);i++){
    	if(isalpha(c[i])) ++cnt1;    // đếm số ký tự 
    	else if(isdigit(c[i])) ++cnt2;  // đếm con số
    }
	cout<<cnt1<<" "<<cnt2<<endl;
}