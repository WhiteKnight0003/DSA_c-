#include<bits/stdc++.h>

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define For(i,a,b) for(int i=(a);i<(b);++i)
#define rfor(i,a,b) for(int i=(a)-1;i>=(b);--i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define pi pair<int,int>
#define endl "\n"
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
#define fast std::ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0)

int x[100],n;

void in(){
    for(int i=1;i<=n;i++)
        std::cout<<x[i];
    std::cout<<endl;
}
void Try(int i){
    // Gán các giá trị  có thể cho x[i]
    for(int j=0;j<=1;j++){
        x[i]=j;
        if(i==n){
            in();
        }
        else Try(i+1);
    }
}

int main(){
    fast;
    std::cin>>n;
    Try(1);
}