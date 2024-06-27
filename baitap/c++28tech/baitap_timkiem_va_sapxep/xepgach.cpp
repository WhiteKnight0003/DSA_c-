// có n viên gạch mỗi viên có độ cứng x 
// có thể chồng lên trên viên gạch đó tối đa x viên nếu chồng nhiều hơn thì vỡ

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	for(auto &x: a)
		cin>>x;
	sort(a,a+n,greater<int>());

	int docung =a[0];
	int ans=1;
	for(int i=1;i<n;i++)
		if(docung >= 1){
			++ans; // tăng số lượng viên gạch
			docung = min(docung-1, a[i]);
		}
	cout<<ans<<endl;
	return 0;
}
