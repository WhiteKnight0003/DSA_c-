#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void drawing(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<"* ";
		cout<<"\n";}
    /* ví dụ n=4
    * * * *
    * * * *
    * * * *
    * * * * 
    */
}

void drawing1(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i> 0 && i<n-1 && j>0 && j<n-1)
				cout<<"  ";
			else cout<<"* ";
		}
		cout<<endl;
	}
	/*
 n =5
* * * * * 
*       * 
*       * 
*       * 
* * * * * 

	*/
}

void drawing2(int m, int n){
	for(int i=0; i<m;i++){
		for(int j=0; j<n;j++){
			if(i>0 && i<m-1 && j>0 && j<n-1)
			     cout<<"  ";

		    else cout<<"* ";
	   }
		cout<<endl;
	}
	/*
	m=4 n=5
* * * * * 
*       * 
*       * 
* * * * * 
*/
}

void drawing3(int m, int n){
	for(int i=0; i<m;i++){
		for(int j=0; j<n;j++){
			if(i>0 && i<m-1 && j>0 && j<n-1)
			     cout<<"x ";

		    else cout<<"* ";
		  /*hoặc viết if(i==0 || i== n-1 || j==0 ||j==n-1
		                cout<<"* "
		                else cout<<"  ";*/
	   }
		cout<<endl;
	}
	/*
	m=4 n=5
* * * * * 
* x x x * 
* x x x * 
* * * * * 
*/
}


void diagonal_line(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<=i)
			cout<<"*";
		    else cout<<"^";
		}
		cout<<endl;
	}
	/*
*^^^^
**^^^
***^^
****^
*****
	*/
}

void diagonal_line2(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i+j<=n+1)
			cout<<"*";
		    else cout<<"^";
		}
		cout<<endl;
	}
	/*
*****
****^
***^^
**^^^
*^^^^
	*/
}

void parallelogram(int m , int n){
	for(int i=1;i<=m;i++){
		for(int j=1;j<i;j++)
			cout<<"^";
		for(int j=1;j<=n;j++)
			cout<<"*";
		cout<<endl;
	}
	/*
*****
^*****
^^*****
^^^*****
	*/
}

void parallelogram2(int m, int n){
	for(int i=1;i<=m;i++){
		for(int j=1; j<=n-i;j++)
			cout<<"^";
		for(int j=1;j<=i;j++){
			if(i==1 || j==1 || i==m || i==j)
			cout<<"*";
		    else cout<<" ";
	}
		cout<<endl;
	}
	/*
^^^^*
^^^**
^^* *
^*  *
*****
	*/
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int m,n; cin>>m>>n;
	parallelogram2(m,n);
	return 0;
}