#include<bits/stdc++.h>
using namespace std;

int cmp(const void *a, const void *b){
	char *x= (char *)a;
	char *y= (char *)b;
	return strcmp(x,y);
}
/* code 1 duyệt từng phần tử 
int main(){
	char c[1000];
	gets(c);
	strlwr(c);
	char a[20][50];
	int n=0;
	char *token = strtok(c, " ");
	while( token != NULL){
		strcpy(a[n], token);
		++n;
		token = strtok(NULL, " ");
	}

	int b[n]={0}; // gán tất cả phần tử trong mảng b có n phần tử =0
    for(int i=0;i<n;i++){
    	if(b[i]==0){
    		int cnt=1;
    		for(int j=i+1;j<n;j++)
    			if(strcmp(a[i], a[j])==0){
    				++cnt;
    				b[j]=1; // đánh dầu phần tử đã xh lần sau nó sẽ k xét phần tử này nx 
    			}
    				cout<<a[i]<<" "<<cnt<<endl;
    	}
    }
    return 0;
}
*/


/* code 2 : sắp xếp lại
int main(){
	char c[1000];
	gets(c);
	strlwr(c);
	char a[20][50];
	int n=0;
	char *token = strtok(c, " ");
	while(token != NULL){
		strcpy(a[n], token);
		++n;
		token = strtok(NULL, " ");
	}

	qsort(a, n, sizeof(a[0]), cmp);
	for(int i=0;i<n;i++){
		int cnt =1;
		while(strcmp(a[i], a[i+1])==0){
			++i;
			++cnt;
		}
		cout<<a[i]<<" "<<cnt<<endl;
	}
	return 0;
}
*/

int main(){
	char c[1000];
	gets(c);
	strlwr(c);
	char a[20][50];
	int n=0;
	char *token = strtok(c," ");
	while(token != NULL){
		strcpy(a[n],token);
		++n;
		token = strtok(NULL, " ");
	}

	qsort(a, n, sizeof(a[0]), cmp);
	int max =0, idx;
	for(int i=0;i<n-1;i++){
		int cnt =1;
		while(strcmp(a[i],a[i+1])==0){
			++cnt;
			++i;
		}
		if(cnt>max){
			max = cnt;
			idx = i;
		}
		else if(cnt == max){
			if(strcmp(a[idx], a[i])>0) // nếu vị trí đằng sau 
				idx=i;
		}
	}
	cout<<a[idx]<<" "<<max<<endl;
	return 0;
}