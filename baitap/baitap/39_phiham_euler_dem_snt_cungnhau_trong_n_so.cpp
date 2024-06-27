// là hàm đếm số lượng các số nt cùng nhau với n 
// __gcd(i, n)=1 ; i<=n

/* cách đếm bthg với số bé
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int cnt=0;
	for(int i=1;i<=n;i++)
		if(__gcd(i, n)== 1)
			++cnt;
	cout<<cnt<<endl;
	return 0;
}
*/


// cách đếm với n rất lớn 
// ví dụ 60 = 2^2 *3*5
// p(60) = 60 *(1-1/2)*(1- 1/3)*(1- 1/5) 
/* cttq :  
sum=60;
sum*=(1-1/x)  x là các ước nguyên tố của n là chỉ đc tính 1 lần 
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll phi(ll n){
	ll res= n;
	for(int i=2; i<=sqrt(n); i++)
		if(n%i==0){
			while(n%i==0)
				n/=i;
			res-= res/i;// n(1-1/i) = n - n/p viết thế này ms cho ra kq đúng
		}
	if(n!=1)
		res -= res/n;
	return res;
}
int main(){
	ll n; cin>>n;
	cout<<phi(n)<<endl;
	return 0;
}