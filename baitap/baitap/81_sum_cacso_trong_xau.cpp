#include<bits/stdc++.h>
using namespace std;

// ví dụ 1abc23 = 1+23 = 24
/* code 1
int main(){
	int t; cin>>t;
	getchar();
	while(t--){
		char c[100001];
		gets(c);
		int sum=0;
		int res =0;
		for(int i=0;i<strlen(c);i++){
			if(isdigit(c[i]))
				res=res*10+c[i]-'0'; // -'0' định dạng số 
			                          // chữ hoa phải - 'A'
			                          // chữ thường phải - 'a'
		    else {
		    	sum+=res;
		    	res=0;
		    }
		} // chưa xét phần tử cuối cùng nếu nó là số
		if(isdigit(c[strlen(c)-1]))
			sum+=res;
		cout<<sum<<endl;
	}
}
*/
