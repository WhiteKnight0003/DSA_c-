// cho xau a - thêm bn kitu de no thanh 1 xau có du kitu tu a-> z
#include<bits/stdc++.h>
using namespace std;

// phải tìm dãy con tăng dài nhất (số phần tử trong dãy con)
int lis(char c[]){
	int lis[strlen(c)];
	// lis[i] : chieu dai day con tang dau nhat ket thuc tai chi so
	for(int i=0;i<strlen(c);i++){
		lis[i]=1;
		for(int j=0;j<i;j++)
			if(c[i]>c[j] && lis[i]<lis[j]+1)
				lis[i]= lis[j]+1;
	}
	int res =0;
	for(int i=0;i<strlen(c);i++)
		if(lis[i]>res)
			res = lis[i];
	return 26-res;
}

int main(){
	char c[1000];
	cin>>c;
	cout<<lis(c);
	return 0;
}