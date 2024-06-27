 // xóa số 0 trong xâu để tạo thành xâu full 1
#include<bits/stdc++.h>
using namespace std;

int deleto0(char c[]){
	int idx=-1, res=0;
	for(int i=0;i<strlen(c);i++)
		if(c[i]=='1'){
			if(idx== -1)
				idx=i;
			else {
				res += i -idx -1;
				// i - chỉ số đứng trc nó -1
				idx =i;
			}
		}
	return res;
}
int main(){
	int t; cin>>t;
	while(t--){
		char c[100];
		cin>>c;
		cout<<deleto0(c)<<endl;
	}
	return 0;
}
