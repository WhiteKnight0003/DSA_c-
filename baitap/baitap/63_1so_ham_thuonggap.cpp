#include<bits/stdc++.h>
using namespace std;

// int is_lower(char c) : kt 1 ký tự có phải là chữ in thường 
// đúng return 1; sai 0
int is_lower(char c){
	if(c>='a' && c<='z')
		return 1;
	return 0;
}

// int is_upper(char c) : kt 1 ký tự có phải là chữ in hoa
int is_upper(char c){
	if(c>='A' && c<= 'Z')
		return 1;
	return 0;
}

// int is_alphar(char c) : kt 1 ký tự có phải là chữ cái
int is_alphar(char c){
	if((c>='a' && c<='z') || (c>='A' && c<='Z') )
		return 1;
	return 0;
}

// int is_digit(char c) : kt 1 ký tự có phải là ký tự 
int is_digit(char c){
	if(c>='0' && c<= '9')
		return 1;
	return 0;
}

// char to_lower(char c) : trả về dạng in thường của ký tự c
char to_lower(char c){
	if(c>='A' && c<='Z')
		c+=32;
	return c;
}

// char to_upper(char c) : trả về dạng in hoa của ký tự c
char to_lower(char c){
	if(c>='a' && c<='z')
		c-=32;
	return c;
}
// int strlen(char c) : trả về độ dài 
int strlen(char c){
	int cnt=0;
	while(c[cnt] != '0')
		++cnt;
	return cnt;
}

// char * strlwr(char c[]) viết thường tất cả các kí tự trong xâu
char *strlwr(char c){
	for(int i=0;i<strlen(c);i++)
		if(c[i]>='A' && c[i]<='Z')
			c[i]+=32;
	return c;
}

// char * strupr(char c[]) viết hoa tất cả các kí tự trong xâu
char *strupr(char c){
	for(int i=0;i<strlen(c);i++)
		if(c[i]>='a' && c[i]<='z')
			c[i]-=32;
	return c;
}


// int strcmp( char a[], char b[]) : so sánh 2 sâu a và b theo thứ tự từ điển k phân biệt hoa thường
// nếu a>b return 1 , a=b return 0, a<b return -1
int strcmp(char a, char b){
	int n1= strlen(c);
	int n2= strlen(d);
	int min;
	// nếu muốn nó k phân biệt kí tự in hoa thường thì chuyển cả 2 về cùng 1 loại
    // ví dụ strlwr(c) ;  strlwr(d)
	if(n1<n2)
		min=n1;
	else min = n2;

	for(int i=0;i<min;i++){
		if(a[i] != b[i]){
			if(a[i]> b[i])
				return 1;
			else return 0;
		}
	}
		if(n1==n2)
			return 0;
		else if(n1>n2) return 1;
		else return -1;


}
// long long atoll(char a) : chuyển 1 xâu ký tự thành số nguyên long long 
long long atoll(char c[]){
	long long  res =0;
	for(int i=0;i<strlen(a); i++)
		res=res*10+c[i]-'0';
	return res;
}
// char * strrev(char c[]) : viết hàm đảo ngược 1 xâu
char * strrev(char c[]){
int l=0, r= strlen(c)-1;
while(l<r){
	char tmp=c[l];
	c[l]= c[r];
	c[r]= tmp;
	tmp=c[l];
	++l;
	--r;
}
return c;
}
int main(){
	return 0;
}