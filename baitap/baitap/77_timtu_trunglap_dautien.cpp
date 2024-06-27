#include<bits/stdc++.h>
using namespace std;

int main(){
	char c[1000];
	gets(c);
	char a[20][50];
	int n=0;
	char *token = strtok(c, " ");
	while(token != NULL){
	     strcpy(a[n++],token);
	     token = strtok(NULL," ");
	}
	int res=0;
	for(int i=0;i<n;i++){
		int ok =0;
		for(int j=0;j<i;j++)
			if(strcmp(a[i],a[j])==0){
				ok=1;
				break;
		}
		if(ok){
		   cout<<a[i]<<endl;
		   res=1;
		   break;
	       }
	}
	if(	res==0) cout<<"-1";
	cout<<endl;
	return 0;
}