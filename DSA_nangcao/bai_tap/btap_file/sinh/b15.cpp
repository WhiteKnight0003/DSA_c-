#include<bits/stdc++.h>
using namespace std;

int x[100];
string s;
bool check;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void ktao(){
	for(unsigned int i=1;i<=s.size();i++){
		x[i]=s[i-1]-'0';
	}
}
void sinh(){
	int n=s.size();
	int i=n-1;
	while(i>=1 && x[i]>=x[i+1]){
		--i;
	}
	if(i==0)
		check=false;
	else{
		int j=n;
		while(x[i]>x[j]){
			--j;
		}
		swap(x[i],x[j]);
		reverse(x+i+1,x+n+1);
	}
}
int main(){
	fast;
	int t; cin>>t; cin.ignore();
	while(t--){
		int n;cin>>n;cin.ignore();
		getline(cin,s);
		ktao();
		check=true;
		sinh();
		if(check==true){
			cout<<n<<" ";
			for(unsigned int i=1;i<=s.size();i++){
				cout<<x[i];
			}
			cout<<endl;
		}
		else {
			cout<<"BIGGEST"<<endl;
		}
	}
	return 0;
}