#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	/*    dùng set
	while(t--){
		int n; cin>>n;
		set<int> a;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			a.insert(x);
		}
		cout<<a.size()<<endl;
	}
	*/
    

    while(t--){
    	int n; cin>>n;
    	map<int,bool> mp;
    	// map<int,int>
    	for(int i=0;i<n;i++){
    		int x; cin>>x;
    		mp[x] = true; // đánh dấu nó xh là đúng ;
    		// mp[x]++;
    	}
    	cout<<mp.size()<<endl;
    }
	return 0;
}