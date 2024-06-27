/* code 1
#include<bits/stdc++.h>
using namespace std;

int countt(int n, int p){
	int count=0;
	for(int i=p; i<=n; i+=p){ // duyệt bội của p
		int tmp=i; // gán biến tạm để k làm thay đổi gt i
		while(tmp %p ==0){
			++count;
			tmp/=p;  // gán tạm là do cái này
		}
	}
	return count;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n, p; cin>>n>>p;
		cout<<countt(n,p)<<endl;
	}
	return 0;
}
*/

// code 2 - dùng ct legendre
// số lần xh của p trong n! = n/p + n/p^2 + ....đến khi p^x>n
// ví dụ n=10 p=3   x = 10/3 + 10/9 =4
#include<bits/stdc++.h>
using namespace std;

int count(int n, int p){
	int x=0;
	int tmp=p;
	while(n>tmp){
		x+=n/tmp;
		tmp*=p;
	}
	return x;
}

// hoặc 
int count2(int n , int p){
	int ans=0;
	for(int i=p; i<=n;i*=p)
		ans+=n/i;
	return ans;
}
int main(){
	int t; cin>>t; 
	while(t--){
		int n, p; cin>>n>>p;
		cout<<count(n,p)<<" "<<count2(n,p)<<endl;
	}
}