#include<bits/stdc++.h>
using namespace std;

long long fn[100];
void sieve(){
    fn[0]=1;
    fn[1]=2;
    for(int i=2;i<=100;i++)
        fn[i]=fn[i-1]+fn[i-2];
}
int main(){
    sieve();
    int t; cin>>t;
    while(t--){
        long long sum =0;
       long long n; cin>>n;
       for(int i=1;i<=10;i++)
        if(fn[i]<n && fn[i] %2==0)
            sum+=fn[i];
        cout<<sum<<endl;
    }
    return 0;
}