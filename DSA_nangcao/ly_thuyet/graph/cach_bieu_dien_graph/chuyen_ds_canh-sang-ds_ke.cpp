#include<bits/stdc++.h>

std::vector<int> ke[1001];
int m,n;

void input(){
	std::cin>>m>>n;
	for(int i=0;i<n;i++){
		int u,v ;
		std::cin>>u>>v;
		ke[u].push_back(v);
		ke[v].push_back(u); 
	}
}

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	input();
	for(int i=1;i<=m;i++){
		sort(ke[i].begin(), ke[i].end());
		std::cout<<i<<" : ";
		for(auto x: ke[i])
		    std::cout<<x<<" ";
	    std::cout<<std::endl;
	}
}
/* input
5 4 
2 5
4 1 
4 2
4 3
*/

/* output 
1 : 4 
2 : 4 5 
3 : 4 
4 : 1 2 3 
5 : 2 
*/