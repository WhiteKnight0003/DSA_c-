#include<bits/stdc++.h>
using namespace std;

void rectangle(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if((i+j)%2==0)
				cout<<"1";
			else cout<<"0";
		}
		cout<<endl;
	}
	/*
10101
01010
10101
01010
10101

*/
}

void rectangle2(int n){
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n-1+i;j++)
			cout<<j<<" ";
		cout<<endl;
	}
	/*
1 2 3 4 5 
2 3 4 5 6 
3 4 5 6 7 
4 5 6 7 8 
5 6 7 8 9 

*/
}

void rectangle3(int n){
	for(int i=1;i<=n;i++){
		for(int j=n*(i-1)+1; j<=i*n;j++)
			cout<<j<<" ";
		cout<<endl;
	}/*
1 2 3 4 5 
6 7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 
*/
}

void rectangle4(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i+j<=n)
				cout<<"~";
			else cout<<i;
		}
		cout<<endl;
	}
	/*
~~~~1
~~~22
~~333
~4444
55555

	*/
}

void rectangle5(int n){
	for(int i=1;i<=n;i++){
		int ans=i;
		int cnt=n-1; //kc giữa 2 số đc in ra
		for(int j=1;j<=i;j++){
			cout<<ans<<" ";
			ans+=cnt;
			--cnt;
		}
		/* hay 
		for(int j=1;j<=i;j++){
	      cout<<ans<<" ";
	      ans+= n-j;
		}*/
		cout<<endl;
	}
	/*
1 
2 6 
3 7 10 
4 8 11 13 
5 9 12 14 15 

	*/
}

void rectangle6(int n){
	// tính min - khoảng cách từ điểm Aij đến cách cạnh
	// return n-i;
	int minn;
	for(int i=1;i<=2*n-1;i++){
		for(int j=1;j<=2*n-1;j++){
			cout<<n-min(min(j-1,2*n-1-j),min(i-1,2*n-1-i))<<" ";
		}  // 2*n-1 số ô 
		cout<<endl;
	}

	/*
4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 
*/
}

void rectangle7(int n){
	for(int i=n;i>=1;i--){
		for(int j=n;j>=1;j--){
			if(j>=i)
				cout<<j<<" ";// xét tam giác trên trước 
			else cout<<i<<" ";
		}
		cout<<endl;
	}
/*
5 5 5 5 5 
5 4 4 4 4 
5 4 3 3 3 
5 4 3 2 2 
5 4 3 2 1 */
}

void rectangle8(int n){
	for(int i=1;i<=n;i++){
		int cnt=i;
		for(int j=1;j<=n;j++){
			if(j<i)
			cout<<cnt--;
		    else cout<<cnt++;
	}
		cout<<endl;
	}
}

void rectangle9(int n){
	for(int i=1;i<=n;i++){
		int cnt=i;
		for(int j=1; j<=n;j++){
			if(j<n-i) 
				cout<<cnt++;
			else cout<<cnt;
		}
		cout<<endl;
	}
/*
12344
23444
34444
44444
55555

	*/
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	rectangle9(n);
	return 0;
}