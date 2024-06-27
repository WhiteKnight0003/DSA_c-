#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
#define endl "\n"
void tach1(int n){
	For(i,2,(int)sqrt(n)){
		while(n%i==0){
			cout<<i<<" ";
			n/=i;
		}
	}
	if(n>1) cout<<n<<endl;
	cout<<endl;
}
void tach2(int n){
	For(i,2,(int)sqrt(n)){
		if(n%i==0){
			while(n%i==0){
				n/=i;
			}
			cout<<i<<" ";
		}
	}
	if(n>1) cout<<n<<endl;
	else cout<<endl;
}
void tach3(int n){
	For(i,2,(int)sqrt(n)){
		if(n%i==0){
		    int count=0;
			while(n%i==0){
				count++;
				n/=i;
			}
			cout<<i<<"("<<count<<") ";
		}
	}
	if(n>1) cout<<n<<"("<<1<<")"<<endl;
	else cout<<endl;
}
void tach4(int n){
	For(i,2,(int)sqrt(n)){
		if(n%i==0){
			while(n%i==0){
				if(n/i==1){
					cout<<i;
				}
				else{
				cout<<i<<"x";
			    }
			   n/=i;
			}
		}
	}
	if(n>1) cout<<n<<endl;
	else cout<<endl;
}

void tach5(int n){
	For(i,2,(int)sqrt(n)){
		if(n%i==0){
			int count=0;
			while(n%i==0){
				count++;
				n/=i;
			}
			if(n>1)
			cout<<i<<"^"<<count<<" * ";
		    else cout<<i<<"^"<<count;
		}
	}
	if(n>1) cout<<n<<"^1"<<endl;
	else cout<<endl;
}
int main(){
	fast;
	int n; cin>>n;
	For(i,28,60){
	//tach1(i);
	//tach2(i);
	//tach3(i);
	//tach4(i);
	tach5(i);
    }
	return 0;	
}