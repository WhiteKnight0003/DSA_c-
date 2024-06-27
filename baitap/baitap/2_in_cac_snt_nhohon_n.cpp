/* dùng vòng lặp
#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
	if(n<=1)
		return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
		}
		return true;
	}
int main(){
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	   if(prime(i))
		cout<<i<<endl;
    return 0;
}

*/

// thuật toán sàng số nguyên tố eratosthenes
#include<bits/stdc++.h>
using namespace std;
int prime[1000001]; // kích thước tối đa của mảng
void sieve(){
	memset(prime, 1, sizeof(prime)); // gán tất cả các phần tử bằng 1;

	prime[0]= prime[1] =0;
	for(int i=2;i<=1000;i++) // 1000 = sqrt(10^6);
		if(prime[i]) 
			for(int j=i*i;j<=1000000;j+=i) // duyêt cac boi cua i và k cho no la so nguyen to
				prime[j] =0; // k còn là số nguyên tố nx

}
int main(){
	sieve(); // mảng chứa các số nt
	int n; cin>>n;
	for(int i=0;i<=n;i++)
		if(prime[i])
			cout<<i<<" ";
	return 0;
}