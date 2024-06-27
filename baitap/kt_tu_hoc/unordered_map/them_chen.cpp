/*Lưu ý do mỗi key trong unordered_map đều là duy nhất nên nếu chúng ta 
thêm một phần tử mới vào unordered_map nhưng lại có key trùng với 
một phần tử đã tồn tại trước đó, thì giá trị của phần tử 
mới này sẽ được dùng để ghi đè lên phần tử trước đó.*/

// cú pháp mp[key] = value;

/*
Bởi vì các phần tử trong một unordered_map là duy nhất, nên thao tác chèn sẽ kiểm tra xem mỗi
 phần tử được chèn đã tồn tại trong unordered_map hay chưa. Nếu chưa tồn tại thì phần tử đó sẽ 
 được chèn và ngược lại nếu đã tồn tại thì không được chèn.
 */

/* chèn 1 phần tử bằng insert;
cú pháp : mp.insert(pair<k_type,v_type>(k,v))
hoặc mp.insert(make_pair(k,v)) 
*/

// ví dụ :

#include<bits/stdc++.h>
using namespace std;

void dump(unordered_map<char,int>& mp){
	for(auto x: mp)
		cout<<x.first<<" : "<<x.second<<endl;
}
int main(){
	unordered_map<char, int> mp;
	mp['a']=100;
	mp['b']=200;
	mp.insert(pair<char,int>('c',300));
	mp.insert(pair<char,int>('a',20));
	dump(mp);
	return 0;
}