#include<bits/stdc++.h>
using namespace std;

// tính tổng bằng cách duyệt từng phần tử 
int sum(int l, int r, int a[]){
	int sum=0;
	for(int i=l;i<=r;i++)
		sum+=a[i];
	return sum;

}

// tính tổng bằng cách lấy tổng từ đi số k nằm trong đoạn
/* ví dụ        1 2 3 4  5  6
                1 3 6 10 15 21   cộng nó vs chỉ số đằng trc 
   lấy 4-> 6       21 - 6 = 15*/

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	long long prefix[n];
	for(int i=0;i<n;i++){
		if(i==0) prefix[0] = a[0];
		else prefix[i]=prefix[i-1]+a[i];
	}
	int m; cin>>m;
	while(m--){
		int l,r;
		cin>>l>>r; 
		if(l==0) cout<<prefix[r]<<endl;
		else cout<<prefix[r]-prefix[l-1]<<endl;
	}
	return 0;
}

1 2 -9 3 5
1 3 -6 -3 2