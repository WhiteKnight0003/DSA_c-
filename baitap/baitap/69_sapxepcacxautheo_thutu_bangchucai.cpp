#include<bits/stdc++.h>
using namespace std;


void sx(char a[][50], int n){
	for(int i=0;i<n ;i++){
		int min = i;
		for(int j=i+1;j<n;j++)
			if(strcmp(a[j], a[min])< 0)
				min =j;
	    char tmp[100];
	    strcpy(tmp, a[min]);
	    strcpy(a[min], a[i]);
	    strcpy(a[i], tmp);
	}

}
int main(){
    char c[1000];
    gets(c);
    char a[20][50]; // tách mảng con thành 20 dòng mỗi dòng 50pt
    int n=0; // dem so luong phan tu trong xâu
    char *token = strtok(c, " ");
    while(token != NULL){
    	strcpy(a[n], token);// copy toàn bộ chuỗi đã cắt  vào 1 dòng 
    	++n;
    	token = strtok(NULL, " ");
    }
    sx(a,n);
    for(int i=0;i<n;i++)
    	cout<<a[i]<<endl;
    return 0;
}