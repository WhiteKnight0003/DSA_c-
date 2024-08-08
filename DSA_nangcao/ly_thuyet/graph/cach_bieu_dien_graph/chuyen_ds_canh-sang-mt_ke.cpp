#include<bits/stdc++.h>

int matran_ke[1001][1001];
int v,e;

void input(){
	std::cin>>v>>e;
	for(int i=1;i<=e;i++){
		int head, tail;
		std::cin>>head>>tail;
		matran_ke[head][tail]=1;
		matran_ke[tail][head]=1;
	}
}

int main(){
	input();
	for(int i=1;i<=v;i++){
		for(int j=1;j<=v;j++)
			std::cout<<matran_ke[i][j]<<" ";
		std::cout<<std::endl;
	}
}

/*  input
5 4 
4 3
3 1
4 2
5 4
*/

/*
0 0 1 0 0 
0 0 0 1 0 
1 0 0 1 0 
0 1 1 0 1 
0 0 0 1 0
*/