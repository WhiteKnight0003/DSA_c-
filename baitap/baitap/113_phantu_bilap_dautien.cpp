#include<bits/stdc++.h>
using namespace std;

int cnt[1000001] ={0};
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
	int n;    cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int ok=0;
	for(int i=0;i<n;i++){
		if(cnt[a[i]] == 1){
			cout<<a[i]<<endl; // in ra thg đầu tiên đc lặp lại
			ok=1;
			break;
		}
		cnt[a[i]]=1;
	}
	if(!ok) cout<<"-1"<<endl;
	memset(cnt, 0, sizeof(cnt));
    }
    return 0;
}