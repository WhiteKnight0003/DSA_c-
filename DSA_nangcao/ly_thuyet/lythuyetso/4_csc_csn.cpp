#include<bits/stdc++.h>
using namespace std;


// csc 
int congsai(int a, int b){
	return a-b;
}

bool csc(int a[], int n){
	int cs = congsai(a[1],a[0]);
	for(int i=1;i<n-1;i++)
		if(a[i+1] - a[i] != cs)
			return false;
	return true;
}

int Um(int a[], int m){
	int d = a[1] - a[0];
	return a[0] + (m-1)*d;
}
int sum_csc(int a[], int n){
	return n*(a[n-1]+a[0])*1.0/2;
}

// csc 
float congboi(int a, int b){
	return a*1.0/b;
}

bool csn(int a[], int n){
	float cb = congsai(a[1],a[0]);
	for(int i=1;i<n-1;i++)
		if(a[i+1]*1.0 /a[i] != cb)
			return false;
	return true;
}

float Um_(int a[], int m){
	float q = a[1]*1.0/a[0];
	return (a[0]*pow(q,n-1));
}
float sum_csn(int a[], int n){
	float q = a[1]*1.0/a[0];
	return (a[0]*pow(q,n)-1)*1.0/(q-1);
}

int main(){
	int n; cin>>n;
	int a[n];
	for(auto &x: a){
		cin>>x;
	}
	if(csn(a,n))
		cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}