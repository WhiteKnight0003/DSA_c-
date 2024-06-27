#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x: a)
       cin>>x;
    int m;
    cin>>m;
    int b[m];
    for(auto &x: b)
    	cin>>x;
    vector<int>::iterator low,up;
    for(int i=0;i<m;i++){
    	int count=0;
    low=lower_bound(a.begin(),a.begin()+n,b[i]);
    for(auto x: a){
    	if(x==b[i])
    		count++;
    }
    if(count>0) cout<<"YES ";
    	else cout<<"NO ";
    cout<<low-a.begin()+1<<endl;
   }
    return 0;
}
