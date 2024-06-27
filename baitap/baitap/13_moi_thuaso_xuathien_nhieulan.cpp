// ví dụ 28 = 2 2 3 7
#include<bits/stdc++.h>
using namespace std;
void analysis(int n){
	for(int i=2;i<=sqrt(n); i++)
		while(n%i==0){
			cout<<i<<" ";
			n/=i;
		}
		// ví dụ n = 84
		//- đầu duyệt từ 2 đến căn 84 = 9
		// 2 nhỏ hơn 9 nên chia 2 đến khi bao h k chia đc nx thì tăng i lên
		// 84 /2 / 2= 21 => n =21 => căn 21=4 
		// 3<4 thỏa mãn 
		// n= 21/ 3=7 => n=7 => căn = 2;
		// 2<7 (hay 7> căn n ) => k chia đc nx phải xét thêm ở ngoài 


	// sau for phải kt xem n = 1 ch
		if(n!= 1)
			cout<<n<<" ";
}
int main(){
	int n; cin>>n;
	analysis(n);
	return 0;
}