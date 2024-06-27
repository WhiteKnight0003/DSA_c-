#include<bits/stdc++.h>
using namespace std;

int symmetry1(char c[]){
	// so sánh 1 xâu xem có đối xứng
	int l=0; int r= strlen(c)-1;
	while(l<=r){
		if(c[l]!=c[r])
			return 0;
		++l;
		--r;
	}
	return 1;
}

// thay 
int symmetry2(char c[]){
	// so sánh 1 xâu vs đối xứng của nó nếu chỉ khác 1 phần tử thì đúng
	int l=1; int r= strlen(c)-2;
	while(l<=r){
		if(c[l] != c[r])
			return 0;
		++l;
		--r;
	}
	return 1;
}

int main(){
	char c[1002];
	gets(c);
	if(symmetry2(c))
		cout<<"YES";
	else cout<<"NO";
	return 0;

}