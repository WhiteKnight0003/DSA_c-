/* code 1 : dùng ct legendre
#include<bits/stdc++.h>
using namespace std;

int count(int n){ // 10 =2 *5   chỉ cần đếm số lần xh của 5
	int cnt=0;
	for(int i=5;i<=n;i*=5)
		cnt+=n/i;
		return cnt;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
	cout<<count(n)<<endl;
   }
	return 0;
}
*/

// code 2
#include<bits/stdc++.h>
using namespace std;

int count(int n){ // 10 =2 *5   chỉ cần đếm số lần xh của 5
	int cnt=0;
	int tmp=5;
	while(n>tmp){
		cnt+=n/tmp;
		tmp*=5;
	}
	return cnt;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
	cout<<count(n)<<endl;
   }
	return 0;
}