#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define endl "\n"
#define fi first
#define se second

/* minh lam 
void xuly(){
	int k;cin>>k;
	int c1=0;
	int c2=0;
	int c3=0;
	vector<string> a1(k);
	vector<string> a2(k);
	vector<string> a3(k);
	map<string,int> m;
	for(auto &x: a1){
		cin>>x;
		m[x]++;
	}
	for(auto &x: a2){
		cin>>x;
		m[x]++;
	}
	for(auto &x: a3){
		cin>>x;
		m[x]++;
	}
	
	for(int i=0;i<k;i++){
		if(m[a1[i]] == 2){
			c1+=1;
		}
		else if(m[a1[i]] == 1){
			c1+=3;
		}
		else if(m[a1[i]] == 3){
			c1+=0;
		}
		
		if(m[a2[i]] == 2){
			c2+=1;
		}
		else if(m[a2[i]] == 1){
			c2+=3;
		}
		else if(m[a2[i]] == 3){
			c2+=0;
		}

		if(m[a3[i]] == 2){
			c3+=1;
		}
		else if(m[a3[i]] == 1){
			c3+=3;
		}
		else if(m[a3[i]] == 3){
			c3+=0;
		}
	}
	cout<<c1<<" "<<c2<<" "<<c3<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		xuly();
	}
	return 0;
}
*/


// cacsh ngta lamf - 2 for - khong toi uu
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<string> a[3]; // tao 3 mang 
		map<string,int> m;
		for(int i=0;i<3;i++){
			for(int j=0;j<n;j++){
				string s;
				cin>>s;
				a[i].push_back(s);
				m[s]++;
			}
		}

		int cnt[3]={};

		for(int i=0;i<3;i++){
			for(auto x: a[i]){
				if(m[x] == 2){
					cnt[i]+=1;
				}
				if(m[x] == 1){
					cnt[i]+=3;
				}
			}
		}
		cout<<cnt[0]<<" "<<cnt[1]<<" "<<cnt[2]<<endl;
	}
	return 0;
}
