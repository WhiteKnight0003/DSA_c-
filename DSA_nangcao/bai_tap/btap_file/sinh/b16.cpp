#include<bits/stdc++.h>
using namespace std;

/*
mỗi dòng + mỗi cột chỉ lấy 1 phần tử
dòng t1 lấy phần tử t1
dòng t2 lấy phần tử t2
dòng t3 lấy phần tử t3
chỉ số dòng chạy từ 1 -> n 
-> sinh ra hoán vị của n phần tử 
// hàng i cột a[i];

sinh ra hoan vi de khi hoan vi phan tu o hang i cot a[i] co sum thoải mãn
*/
int n,k,a[100];
string s;
bool check;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		int mt[n+1][n+1];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>mt[i][j];
			}
		}
		for(int i=1;i<=n;i++)
			a[i]=i; // gán cột
		vector<string> res;
		do{
			int sum=0;
			for(int i=1;i<=n;i++){
				sum+=mt[i][a[i]]; // hang i lay phan tu i
			}
			if(sum==k){
				string ans="";
				for(int i=1;i<=n;i++){
					ans+=to_string(a[i]); // vi tri
					ans+=" ";
				}
				res.push_back(ans);
			}
		}while(next_permutation(a+1,a+n+1));
		cout<<res.size()<<endl;
		for(auto x: res){
			cout<<x<<endl;
		}
    }
    return 0;
}