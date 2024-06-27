#include<bits/stdc++.h>
using namespace std;

class job{
private:
	int start,end;
public:
	job(){
		start=end=0;
	}
	int getStart(){
		return start;
	}
	int getEnd()  const{
		return end;
	}
	void setStart(int s) {
        start = s;
    }

    void setEnd(int e) {
        end = e;
    }
};

bool cmp(const job& a,const job& b){
	return a.getEnd() < b.getEnd();
}

int main(){
	int t; cin>>t; 
	while(t--){
		int n; cin>>n;
		int *st = new int[n];
		int *en = new int[n];

		vector<job> v(n);
		for(int i=0;i<n;i++){
			cin>>st[i];
		}
		for(int i=0;i<n;i++){
			cin>>en[i];
		}
		for(int i=0;i<n;i++){
			v[i].setStart(st[i]);
			v[i].setEnd(en[i]);
		}
		sort(v.begin(),v.end(),cmp);


		vector<job> res;
		res.push_back(v[0]);
		for(int i=1;i<n;++i){
			if(v[i].getStart() >= res.back().getEnd()){
				res.push_back(v[i]);
			}
		}

		// kq
		cout<<endl;
		for(auto x: res){
			cout<<x.getStart()<<"  "<<x.getEnd()<<endl;
		}
	}
}