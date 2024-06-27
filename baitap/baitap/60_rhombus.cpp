#include<bits/stdc++.h>
using namespace std;

void rhombus(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}

	for(int i=1; i<=n-1;i++){
		for(int j=1;j<=n-i;j++)
			cout<<"*";
		cout<<endl;
	}
	/*
*
**
***
****
*****
****
***
**
*
	*/
}

void rhombus2(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++)
			cout<<"-";
		for(int j=1; j<=2*i-1;j++)
			cout<<"*";
		cout<<endl;
	}
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=i;j++)
			cout<<"-";
		for(int j=1; j<=2*(n-1-i+1)-1;j++)
			cout<<"*";
		cout<<endl;
	}
	/*
----*
---***
--*****
-*******
*********
-*******
--*****
---***
----*
	*/
}

void rhombus3(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=2*n;j++){
			if(i+j<=n+1 || j>=i+n)
				cout<<"*";
			/* gộp lại lên trên 
			else if(j>=i+5)
				cout<<"*";*/
		    else cout<<"~";
		}
		cout<<endl;
	}

	for(int i=n-1;i>=1;i--){
		for(int j=1;j<=2*n;j++){
			if(i+j<=n+1 || j>= n+i )
				cout<<"*";
			else cout<<"~";
      }
		cout<<endl;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	rhombus3(n);
	return 0;
}