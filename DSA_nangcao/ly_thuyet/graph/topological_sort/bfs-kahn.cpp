// thuật toán kahn hay thuật toán xóa dần đỉnh


// quy trình
// ban đầu đếm bán bậc vào của các đỉnh
// chọn ra đỉnh có bán bậc vào = 0 để bắt đầu
// giả sử đồ thị có đỉnh 1 có bán bậc vào = 0 => bắt đầu xóa 1 trước -> các cạnh kề vs 1 cũng  mất - đồng thời bán bậc vào các đỉnh kề 1 sẽ bị giảm đi 1 
// sau đó đẩy các đỉnh có bán bậc vào = 0 vào queue
// lấy các đỉnh đầu queue để chạy tiếp

#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];
bool visited[1001];
int indegree[1001];
vector<int> topo;

void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x, y;
		cin>>x>>y;
		adj[x].push_back(y);
		indegree[y]++;
	}
	memset(visited, false, sizeof(visited));
}


void kahn(){
	queue<int> q;
	for(int i=1;i<=n;i++)
		if(indegree[i]==0)
			q.push(i);
	while(!q.empty()){
		int u = q.front();
		q.pop();
		cout<<u<<" ";
		for(auto x: adj[u]){
			indegree[x]--;
			if(indegree[x]==0)
				q.push(x);
		}
	}
}

int main(){
	inp();
	kahn();


/* in
9 10
1 2
2 3
2 4
3 5
1 6
1 7
6 4
4 7
7 5
8 9

*/

	/* out 
	1 8 2 6 9 3 4 7 5 
	*/