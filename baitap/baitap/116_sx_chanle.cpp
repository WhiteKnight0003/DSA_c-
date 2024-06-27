#include<bits/stdc++.h>
using namespace std;

int cmp(const void *a, const void *b){
	return *(int*)a- *(int*)b;
}
int main(){
	int n; cin>>n;
	int a[n];
	for(auto &x: a)
		cin>>x;
	int le[n],chan[n];
	int l=0,c=0;
	int i=0;
	while(i<n){
		if(a[i]%2==1)
			le[l++]=a[i];
		else chan[c++] =a[i];
		++i;
	}
	sort(le,le+l);  
	// qsort(chan,c,sizeof(int),cmp);
	sort(chan,chan+c);
	//qsort(le,l,sizeof(int),cmp);
	for(int i=0;i<l;i++)
		cout<<chan[i]<<" ";
	for(int i=0;i<c;i++)
		cout<<le[i]<<" ";
	
	return 0;
}