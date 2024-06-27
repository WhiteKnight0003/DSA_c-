// chèn bằng insert 
/*#include <iostream>
#include <set>
using namespace std;

int main ()
{
    set<int> st{1, 3, 6, 7, 5};
    auto r = st.insert(3); // vì set k chứa phần tử trùng nhau nên k chèn 
   cout << r.second << "\n"; 
    // 0 : không chèn
    
    r = st.insert(4);
    // dùng phương pháp sencond để kt xem phần tử đã đc chèn hay ch
    cout << r.second << "\n"; 
    // 1 : đã chèn
    
    return 0;
}
*/

// chèn nhiều phần tử với insert
#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> num{1,3,4,5,6,9};

    //khai báo 1 initalizer_list 
    int a[] = {2,7,11};
    num.insert(a,a+3);
    for(auto x: num)
        cout<<x<<" ";
    return 0;
}