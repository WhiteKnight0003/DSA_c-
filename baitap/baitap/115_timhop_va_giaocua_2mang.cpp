/* 2 mảng có sx
#include<bits/stdc++.h>
using namespace std;

int cnt[10000001]={0};
int main(){
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(auto &x: a)
		cin>>x;
	for(auto &x: b)
		cin>>x;
	int giao[min(n,m)] ,hop[m+n];
	int i=0,j=0,g=0,h=0;
	while(i<n && j<m){
		if(a[i]==b[j]){
			giao[g]=a[i];
			hop[h]=a[i];
			++g,++h;
			++i;++j;
		}else if(a[i]>b[j]){
			hop[h++]=b[j++];
		}
		else hop[h++]=a[i++];
	}
	while(i<n)
		hop[h++]=a[i++];
	while(j<m)
		hop[h++]=b[j++];
	for(int i=0;i<h;i++) cout<<hop[i]<<" ";
		cout<<endl;
	for(int i=0;i<g;i++) cout<<giao[i]<<" ";
		return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

int cnt[1000001]={0};
int main(){
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	int min_val =1e9, max_val=-1e9;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cnt[a[i]]=-1;
		min_val=min(min_val,a[i]); //1
		max_val=max(max_val,a[i]); //4
	}

	for(int i=0;i<m;i++){
		cin>>b[i];
		if(cnt[b[i]]== -1) cnt[b[i]]=2; // tìm hợp
		else cnt[b[i]]=1;
		min_val=min(min_val,b[i]);//1
		max_val=max(max_val,b[i]);//9
	}
	for(int i=min_val; i<=max_val;i++)
		if(cnt[i] !=0) cout<<i<<" "; // hợp
	cout<<endl;
	for(int i=min_val; i<=max_val;i++)
		if(cnt[i]==2)
			cout<<i<<" ";
	return 0;

}

1  2  3  4
-1 -1 -1 -1
1 5 2 9 3
2 1 2 1 2