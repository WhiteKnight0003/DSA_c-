#include<bits/stdc++.h>
using namespace std;

int n,k;
char x[100];
bool check;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void ktao(){
	for(int i=1;i<=n;i++){
		x[i]='A';
	}
}
void sinh(){
	int i=n;
	while(i>=1 && x[i]=='B'){
		x[i]='A';
		i--;
	}
	if(i==0){
		check=false;
	}
	else {
		x[i]='B';
	}
}
bool checkk(){
	int dem=0;
	int ans=0;
	for(int i=1;i<=n;i++){
		if(x[i]=='A')
			++dem;
		else dem=0;
		if(dem>k) return false;
		if(dem==k)
			ans++;
	}
	return ans==1;
}
int main(){
	fast;
	cin>>n>>k;
	ktao();
	check = true;
	while(check){
		if(checkk()){
			for(int i=1;i<=n;i++)
			cout<<x[i];
		    cout<<endl;
		}
		sinh();
	}
	return 0;
}