#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void triangle(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}
	/*
*
**
***
****
*****
*/
}

void triangle1(int n){
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=i;j--)
			cout<<"*";
		cout<<endl;
	}
	/*
*****
****
***
**
*
*/
}


void triangle2(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j<n-1-i)
			 cout<<" ";
			else cout<<"*";
		}
		cout<<endl;
	}
	/*
    *
   **
  ***
 ****
*****
*/
}


void triangle3(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j>n-1-i)
			 cout<<" ";
			else cout<<"*";
		}
		cout<<endl;
	}
	/*
*****
**** 
***  
**   
* 

*/
}


void triangle4(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i+j<n-1)
			 cout<<" ";
			else cout<<"*";
		}
		cout<<endl;
	}
	/*
    *
   **
  ***
 ****
*****

*/
}


void triangle5(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(i==0 || i==(n-1) || j==0 ||i==j  )
				cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
	/*
*
**
* *
*  *
*****
*/
}

void triangle6(int n){
	for(int i=1;i<=n;i++){
		for(int j=1; j<=n-i;j++)
			cout<<" ";// xử lý dấu cách ở đầu
		for(int j=1;j<=2*i -1;j++){
			if(i==1 || i==n || j==1 || j==2*i-1)
				cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}

	// nếu k có vòng for ở đầu 
/*
*
* *
*   *
*     *
*********
	*/

/* nếu có for ở đầu
	*
   * *
  *   *
 *     *
*********
*/
}

void triangle7(int n ){
	for(int i=1;i<=n;i++){
		for(int j=1; j<i;j++)
			cout<<" ";
		for(int j=1;j<=2*(n-i+1)-1;j++)
			cout<<"*";
		cout<<endl;
	}
	/*
*********
 *******
  *****
   ***
    *
    */
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	triangle7(n);
	return 0;
}