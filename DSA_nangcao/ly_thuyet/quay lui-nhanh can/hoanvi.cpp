#include<bits/stdc++.h>
using namespace std;

int x[100], n, visited[100];
void in(){
	for(int i=1;i<=n;i++)
		cout<<x[i];
	cout<<endl;
}

void Try(int i){
	for(int j=1;j<=n;j++){
		if(visited[j]==0){
			x[i]=j;
			visited[j]=1;

			
		if(i==n)
			in();
		else Try(i+1);
		visited[j]=0;
		}
	}
}
int main(){
	cin>>n;
	Try(1);
}