#include<bits/stdc++.h>
using namespace std;

int x[100], n, cnt=0, k;
void in(){
	for(int i=1;i<=k;i++){
		cout<<x[i];
	}
	cout<<endl;
}

void Try(int i){
	for(int j=x[i-1]+1; j<=n-k+i; j++){
		x[i] = j;

		if(i==k)
			in();
		else Try(i+1);
	}
}

int main(){
	cin>>n>>k;
	Try(1);
}

/* i =1 ; for(int j=1;j<=3;j++)
*/