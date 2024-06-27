// cho p[x,y] - và đc hoán đổi giữa a[p[i]] và a[p[i+1]]
// xem dãy đã cho sau khi sắp xếp có phải dãy tăng hay k
#include<bits/stdc++.h>
using namespace std;


int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int pos[101]={0};
		for(int i=0;i<m;i++){
			int x; cin>>x;
			pos[x-1]=1;///
		}
		for(int i=0;i<n;i++){
			if(pos[i]==0) continue;
			int index=i;
			while(index<n && pos[index]){
				++index;
			}
			sort(a+i,a+index+i);
			i=index;
		}
		bool ok = true;
		for(int i=0;i<n-1;i++)
			if(a[i]>a[i+1]){
				ok=false;
				break;
			}
		if(ok) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}