#include<bits/stdc++.h>
using namespace std;
// sắp xếp này đảo chỗ từng phần tử
void Selectionsort(int a[], int n){
	for(int i=0;i<n;i++){
		int min_pos=i;
		for(int j=i+1;j<n;j++)
			if(a[j] < a[min_pos])
				min_pos=j;
		swap(a[i],a[min_pos]);
	}
}

int main(){
	int n; cin>>n;
	int a[n];
	for(auto &x: a)
		cin>>x;
	Selectionsort(a,n);
	for(auto x: a)
		cout<<x<<" ";
	return 0;
}