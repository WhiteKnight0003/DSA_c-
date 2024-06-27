// có 4 đoạn dây 4,3,2,6
// tim cac doan day nho nhat để ít chi phí nhất
// 4 3 2 6 => 4 5 6 => 9 +6
//5+ 9+15 = 29
// nên dùng multiset or priority_queue -minheap - vì tốc độ lấy phần tử và xóa nhanh hơn sort 
// priority_queue<int , vector<int> , greater<int>> Q;

#include<bits/stdc++.h>
using namespace std;

int main(){
	priority_queue<int , vector<int> , greater<int>> Q;
	int n; cin>>n;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		Q.push(x);
	}
	int ans =0;
	while(Q.size()>1){
		int k= Q.top();
		Q.pop();
		k+=Q.top();
		Q.pop();
		ans+=k;
		Q.push(k); // push lại đoạn vừa nối 
	}
	cout<<ans<<endl;
}
