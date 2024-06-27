#include<bits/stdc++.h>
using namespace std;

// dãy khác nhau
int diff(int a[], int n){
	int cnt=1;
	int res=0;
	for(int i=1;i<n;i++){
		if(a[i-1] != a[i])
			++cnt;
		else cnt =1;
		res = max(res,cnt);
	}
	return res;
}

// dãy giống nhau
int similir(int a[], int n){
	int cnt=1;
	int res=0;
	for(int i=1;i<n;i++){
		if(a[i-1] == a[i])
			++cnt;
		else cnt =1;
		res = max(res,cnt);
	}
	return res;
}

// dãy trái dấu 
int opposite_sign(int a[], int n){
	int cnt=1;
	int res=0;
	for(int i=1;i<n;i++){
		if((a[i-1] >0 && a[i] <0) || (a[i-1] <0 && a[i] >0))
			cnt++;
		else cnt=1;
		res=max(res,cnt);
	}
	return res;
}
// dãy tăng 
int incre(int a[], int n){
	int cnt=1;
	int res =0;
	for(int i=1;i<n;i++){
		if(a[i] == a[i-1]+1)
			++cnt;
		else cnt=1;
		res=max(cnt,res);
	}
	return res;
}


int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<incre(a,n);
	return 0;
}