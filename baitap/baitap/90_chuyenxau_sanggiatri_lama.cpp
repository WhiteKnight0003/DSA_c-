#include<bits/stdc++.h>
using namespace std;

int val[] = {1,5,10,50,100,500,1000};
char s[]="IVXLCDM";

int findd(char c){
	for(int i=0;i<7;i++)
		if(s[i]==c)
			return i;
}
//IX XI  1 10  10 1
int solve(char c[]){
	int n = strlen(c);
	int res = val[findd(c[n-1])]; // gán res = giá trị của phần tử cuối cùng
	for(int i = n-2;i>=0;i--){
		int pos1= findd(c[i+1]);
		int pos2 = findd(c[i]);
		if(val[pos1] <= val[pos2]) // nếu gt đứng sau <= gt đứng trước
			res += val[pos2];
		else res -= val[pos2];
	}
	return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		char c[1000];
		cin>>c;
		cout<<solve(c)<<endl;
	}
	return 0;
}