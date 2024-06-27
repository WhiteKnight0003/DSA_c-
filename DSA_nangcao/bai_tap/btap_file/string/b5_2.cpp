#include <bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main(){
	int m; cin>>m;
	cin.ignore();
	while(m--){
		int a[200];
		memset(a,0,sizeof(a));
		string t; getline(cin,t);
		int kq; cin>>kq;
		cin.ignore();
		for(auto x: t)
			a[tolower(x)] = 1;
		int dem =0;
		for(int i=97;i<=122;i++){
			if(a[i]==1)
				dem++;
		}
		int res = 26-dem;
		if(res>=kq)
			cout<<"1";
		else cout<<"0";
	}
return 0;
}