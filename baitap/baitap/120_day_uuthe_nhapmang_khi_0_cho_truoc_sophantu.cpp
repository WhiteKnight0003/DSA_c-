// dãy ưu thế chẵn là dãy có chẵn phần tử và số phần tử chẵn > phần tử lẻ
// dãy ưu thế lẻ là dãy có lẻ phần tử và số phần tử chẵn < phần tử lẻ
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=0;
	int c=0, l=0;
	char kitu=' ';
	while(kitu != '\n'){
		int x; cin>>x;
		++n;
		if(x%2==0) ++c;
		else ++l;
		kitu=getchar(); // đọc kí tự
	}
	if((n%2==0 && c>l) || (n%2==1 && c<l))
		cout<<"YES";
	else cout<<"NO";
}