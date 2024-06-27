// đảo ngược vector bằng hàm reverse - 1 function có td đảo ngược thứ tự các phần tử trong đối tượng chứa nhiều phần tử 
 //có thể dùng reverse trong các đối tượng khác ví dụ map
// nó thuộc header : algorithm
// cú pháp : reverse(vt.begin() ,vt.end());

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void dump(vector<int>& v){
for(auto x: v)
    cout<<x<<" ";
}

int main(){
    vector<int> number{1,2,3,4,5,6,7,8};
    reverse(number.begin(), number.end());
    dump(number);
    return 0;
}

