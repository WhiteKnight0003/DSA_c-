// breadth first search
// tìm kiếm theo chiều rộng hơn là chiều sâu
// Thuật toán sẽ tìm kiếm xung quanh để mở rộng trước khi đi xuống sâu hơn

/*
bfs(u){
	// Step1: Khởi tạo
	queue = o; - tạo 1 queue rỗng
	push(queue,u) - ddaayr u vào queue
	visited[u] = true;  đánh dấu u đã được thăm

	// Step 2: Lặp lại khi mà hàng đợi còn phần tử
	while(!queue.empty()){
		v = queue.front() - lấy đỉnh ở đầu hàng đợi
		queue.pop() - xóa đỉnh khỏi đầu hàng đợi
		<Thăm đỉnh v >
		// duyệt các đỉnh kề với v mà chưa đc thăm và đẩy vào đầu hàng đợi
		for(int x: ke[v]){
			if(!visited[x]){
				push(queue,x)
				visited[x] = true
			}
		}
	}
}

- độ phức tạp phụ thuộc vào cách biểu diễn ma trận
- đồ thị G = <V, E>
- biểu diễn = ma trận kề : O(V*V)
- biểu diễn = danh sách cạnh : O(V*E)
- biểu diễn = danh sách kề : O(V+E)
*/

#include<bits/stdc++.h>

std::vector<int> adj[1001];
int V,E,u;
bool visited[1001];

void input(){
	std::cin>>V>>E>>u;
	for(int i=0;i<E;i++){
		int m,n;
		std::cin>>m>>n;
		adj[m].push_back(n);
		adj[n].push_back(m);
	}
	memset(visited,false, sizeof(visited));
}

void bfs(int u){
	std::queue<int> q;
	q.push(u);
	visited[u] = true;

	while(!q.empty()){
		int v = q.front();
		q.pop();
		std::cout<<v<<" ";
		sort(adj[v].begin(), adj[v].end());
		for(auto x: adj[v])
			if(!visited[x]){
				q.push(x);
				visited[x]= true;
			}
	}
}


int main(){
	input();
	bfs(u);
}

/* input
5 10 4
5 1
4 5
4 2
4 3
1 5
3 5
5 3
3 1
1 4
5 2
*/


/*output
4 1 2 3 5 
*/