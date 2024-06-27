#include<bits/stdc++.h>
using namespace std;

int main(){
	/* in ra ký tự xh nhiều nhất
	char c[5005];
	gets(c);
	int cnt[256]={0};

	for(int i=0;i<strlen(c);i++)
		cnt[c[i]]++;
	int res =0;
	char kt ;

	for(int i=0;i<256;i++)
		if(cnt[i]) // nếu cnt[i] có xh trong xâu ban đầu
			if(cnt[i]>res){
				res = cnt[i];
				kt= (char )(i);
			}
	cout<<kt<<endl;
	*/
    
    /* in ra ký tự giống nhau giữa 2 xâu
    char c1[1000], c2[1000] ;
    gets(c1);
    gets(c2);
    int cnt[256] ={0};

    for(int i=0; i<strlen(c1);i++ )
    	cnt[c1[i]]=1; // ký tự c[i] có xuất hiện và gán nó =1

    for(int i=0; i<strlen(c2);i++ )
    	if(cnt[c2[i]])
    	    cnt[c2[i]]=2; // đánh dấu các phần tử xh trong 2 = 2
    
    for(int i=0;i<256;i++)
    	if(cnt[i]==2) // nếu bằng 2 in ra còn 1 thì k
    		cout<<(char)(i);
    */


    /* in ra ký tự xâu 1 có mà xâu 2 k
    char c1[1000], c2[1000];
    gets(c1);
    gets(c2);
    int cnt[256]={0};

    for(int i=0;i<strlen(c1);i++)
    	cnt[c1[i]]=1; // đánh dấu phần tử xh trong xâu 1
    for(int i=0;i<strlen(c2);i++)
    	if(cnt[c2[i]])
    		cnt[c2[i]] =2;  // đánh dấu phần tử xh trong xâu2
    for(int i=0; i<256;i++)
    	if(cnt[i] ==1) // nếu phần tử đó chỉ có trong xâu 1 k có trong xâu 2
    		cout<<(char)(i);
    */

    /*in ra ký tự xh ở xâu 1 + 2*/
    char c1[1000], c2[1000];
    gets(c1);
    gets(c2);
    int cnt[256] = {0};

    for(int i=0; i<strlen(c1);i++)
    	cnt[c1[i]]=1;

    for(int i=0; i<strlen(c2);i++)
    	  cnt[c2[i]]=1;
    for(int i=0;i<256; i++)
    	if(cnt[i]==1  )
    		cout<<(char)(i);
	return 0;
}