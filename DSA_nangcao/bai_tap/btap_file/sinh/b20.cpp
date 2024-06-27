#include<bits/stdc++.h>
using namespace std;
// việc chia ra chỉ là ta tìm các xâu nhị phân - cái nào có đuôi 0 thì cho 1 vào 1 tập cái nào có đuôi 1 cho vào 1 tập rồi lấy hiệu của chúng

#define ll long long
int n, x[1000], ok;

void ktao(){
	for(int i=1;i<=n;i++){
		x[i]=0;
	}
}
void sinh(){
	int i=n;
	while(i>=1 && x[i]==1){
		x[i]=0;
		--i;
	}
	if(i==0){
		ok=0;
	}
	else{
		x[i]=1;
	}
}

int main(){
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	ktao();
	ok=1;
	ll ans= 1e18;
	while(ok){
		ll sum1=0, sum2=0;
		for(int i=1;i<=n;i++){
			if(x[i]==1)
				sum2+=a[i];
			else sum1+=a[i];
		}
		ans=min(ans,abs(sum1-sum2));
		sinh();
	}
	cout<<ans<<endl;
	return 0;
}