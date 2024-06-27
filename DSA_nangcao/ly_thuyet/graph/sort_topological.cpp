#include<bits/stdc++.h>
using namespace std;

// topological sort : cho đồ thị có hướng để sắp xếp các thành phần theo thứ tự 
// ví dụ ta phải mặc quần -> đeo tất -> đi giày nên t sẽ bước mặc quần trước các bước kia 
// có thể cho ra nhiều kết quả 

// dfs
// bfs (kahn)

// chú ý - nếu đồ thị có hướng có chu trình thì sẽ k có thứ tự topo




/*   dfs 

int n, m;
vector<int> adj[1001];
bool visited[1001];
vector<int> topo;

void input(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
	}
	memset(visited, false, sizeof(visited)); 
}

void dfs(int u){
	visited[u] = true;
	for(int v : adj[u])
		if(!visited[v])
			dfs(v);

	topo.push_back(u); // u da duyet xong
}

int main(){
	input();
	for (int i = 1; i <=n ; i++)
		if(!visited[i])
			dfs(i);

	reverse(topo.begin(), topo.end());
	for(auto x: topo)
		cout<<x<<" ";
}

 test key
6 5
1 2 
2 3
2 4
3 5
1 6

kq   :  1 6 2 4 3 5 


*/


/*bfs - thuận toán kahn - xét theo bán bậc vào của đỉnh */
/* ban đầu xét 1 đỉnh ban đầu có bán bậc vào là 0 - kiểu như bạn sẽ xóa đỉnh đó đi v - những cạnh theo nó sẽ mất
- rồi t cho các đỉnh sau có bán bậc vào = 0 vào queue sau đó lấy phần tử đầu hàng đợi - cứ tiếp tục lamf v
*/

int n,m;
vector<int> adj[1001];
bool visited[1001];
int indegree[1001];
vector<int> topo;

void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		indegree[y]++; // bán bậc vào của y
	}
	memset(visited, false, sizeof(visited));
}

void kahn(){
	queue<int> q;
	for(int i=1;i<=n ;i++)
		if(indegree[i] ==0)
			q.push(i);
		
	while(!q.empty()){
		int u = q.front();
		q.pop();
		cout<<u<<" ";

		for(auto v: adj[u]){
			// xóa u khỏi đồ thị
			indegree[v]--;
			if(indegree[v] ==0)
				q.push(v);
		}
	}
}

int main(){
	inp();
	kahn();
}

/*
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
đồ thị này có 2 thành phần 1 2 3 4 5 6 7 và 8 9
8 9 đứng đâu k qtrong miễn là 8 đứng trước 9 và tương tự như dãy kia
*/