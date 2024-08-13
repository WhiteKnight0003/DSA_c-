// chọn các cạnh nhỏ nhất của đồ thị và k tạo thành chu trình s cho cây khung có n-1 cạnh và sum(trọng số ) là min
#include "Edge.cpp"

using namespace std;

int n,m;
int parent[1001], sz[1001];
vector<int> adj[1001];
vector<Edge> edges;

int find(int u){
	if(u == parent[u])
		return u;
	return parent[u] = find(parent[u]);
}

bool Union(int a, int b){
	a = find(a);
	b = find(b);
	if(a==b) return false;

	if(sz[a] < sz[b])
		swap(a,b);
	sz[a] += sz[b];
	parent[b] = a;
	
	return true;
}


void input(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		edges.push_back({x,y,w});
	}
	for(int i=1;i<=n;i++){
		parent[i] = i;
		sz[i]=1;
	}
}

void kruskal(){
	// sx theo trọng số tăng dần
	sort(edges.begin(), edges.end(), [](Edge a,  Edge b){
		return a.getW() < b.getW();
	});

	int ans =0;
	vector<Edge> tree;
	for(int i=0;i<m;i++){
		if(tree.size() == n-1) // đủ n-1 cạnh nhỏ nhất 
			break;
		if(Union(edges[i].getS(), edges[i].getT())){ // khi 2 đỉnh này chưa thuộc cùng 1 thành phần liên thông mới được cho vào
			// nếu k sẽ tạo ra chu trình 
			tree.push_back(edges[i]);
			ans+=edges[i].getW();
		}
	}
	if(tree.size() < n-1)
		cout<<"Graph khong lien thong"<<endl;
	else{
		cout<<"Minimun spain : "<<ans<<endl;
		for(auto x: tree){
			cout<<x.getS()<<" "<<x.getT()<<" "<<x.getW()<<endl;
		}
	} 
}


int main(){
	input();
	kruskal();
}