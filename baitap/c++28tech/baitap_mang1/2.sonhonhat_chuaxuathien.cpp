// cho mảng a[n] // in ra số dương nhỏ nhất ch xuat hien
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int cnt[1000002];
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		memset(cnt, 0, sizeof(cnt));

		for(int i=0;i<n;i++){
			int x; cin>>x;
			if(x>0)
				cnt[x]=1;
		}
		for(int i=1;i<1000001;i++)
			if(cnt[i]==0){
				cout<<i<<endl;
				break;
			}
		cout<<endl;
	}
	return 0;
}