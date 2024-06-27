// tìm các từ xh trong xau 1 nhma k xh trong xau 2
#include<bits/stdc++.h>
using namespace std;

int cmp(const void *a, const void *b){
	char *x=(char*)a;
	char *y=(char*)b;
	return strcmp(x,y);
}
int main(){
	char c1[1000],  c2[1000];
	char a[100][100], b[100][100];
	gets(c1); gets(c2);
	int n=0, m=0;
	char *token = strtok(c1," ");
	while(token != NULL){
		strcpy(a[n++], token);
		token = strtok(NULL, " ");
	}

	token = strtok(c2," ");
	while(token != NULL){
		strcpy(b[m++], token);
		token = strtok(NULL, " ");
	}
	qsort(a,n, sizeof(a[0]), cmp);

	for(int i=0;i<n;i++){
		while(strcmp(a[i],a[i+1])==0)
			++i;
		int ok =0;
		for(int j=0;j<m;j++)
			if(strcmp(a[i],b[j])==0){
				ok =1; 
				break;
			}
		if(!ok)
			cout<<a[i]<<endl;
	}
	return 0;
}