#include<bits/stdc++.h>
using namespace std;
// 25 k cần trả lại
// 50 phải trả lại  1 tờ 25
// 100 trả 3 tờ 25 or 1 tờ 50 + 1 tờ 25
bool check(int a[], int n){
	int c25=1, c50=0;
	if(a[0]==50 || a[0]==100)
		  return false; 
	for(int i=1;i<=n;i++){
		if(a[i]==25) 
			++c25;
		else if(a[i]==50){
			--c25;
			++c50;
		} 
		else if(a[i]==100){
			if(c50>=1){
				--c50;
				--c25;
			}
			else {
				c25-=3;
			}
		}
		if(c25<0) return false;
	}
	return true;
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	if(check(a,n)) cout<<"YES";
	else cout<<"NO";
	return 0;
}