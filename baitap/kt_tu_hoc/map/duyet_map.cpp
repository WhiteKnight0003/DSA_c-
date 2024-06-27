/* duyet map bằng vòng lặp dựa trên phạm vi
  for(auto &x: mp)
  cout<<x.first<<" : "<<x.second<<endl;

// code đếm số lần lặp của 1 phần tử 
#include<iostream>
#include<map>
using namespace std;

int main(){
	int n;
	cin>>n;
	map<int , int> M;

	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		M[x]++;
	}

	for(auto x: M)
		cout<<x.first<<" "<<x.second<<endl;
	return 0;
}
*/

/*duyệt vòng lặp bằng iterator 
for(auto itr = mp.begin() ; itr = mp.end() ; ++itr) 
    cout<< itr ->first <<" " << itr -> second <<endl;
  */

  #include<iostream>
#include<map>
using namespace std;

int main(){
	int n;
	cin>>n;
	map<int , int> M;

	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		M[x]++;
	}

	for(auto itr =M.begin() ; itr != M.end() ; ++itr)
		cout<<itr->first<<" "<<itr->second<<endl;
	return 0;
}