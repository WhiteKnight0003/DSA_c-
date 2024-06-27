#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	for(int i=0;i<n;i++){
		int min=1e9;
	    int max=-1e9;
		for(int j=0;j<n;j++)
			if(i!=j){
			if(abs(a[i]-a[j]) > max)
				max = abs(a[i]-a[j]);
			if(abs(a[i]-a[j])< min)
				min = abs(a[i]-a[j]);
		}
		cout<<min<<" "<<max<<endl;
	}

	return 0;
}