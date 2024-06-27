/*Để thêm chèn phần tử vào map trong C++, chúng ta sử dụng tới toán tử [] hoặc 2 hàm thành viên là insert() và emplace().
  Do khi chèn phần tử vào map thì vị trí chèn sẽ được tự động quyết định tùy thuộc vào bộ sắp xếp trong map, 
  nên lưu ý khác với các containers khác như list hay vector thì trong map không tồn tại</> các hàm push_back() hay push_front() 
  để thêm phần tử vào đầu hay cuối map.

// thêm 1 phần tử vào map bằng toán tử []
#include<iostream>
#include<map>
using namespace std;

int main(){
	int n; cin>>n;
	map<char, int> M;

	m['x'] =1 ;
	M['y'] = 7;
	m['y'] = 3; // in sẽ ra y=3

  }
*/

 /*Lưu ý do mỗi key trong map đều là duy nhất nên nếu chúng ta thêm một phần tử mới vào map nhưng lại có 
 key trùng với một phần tử đã tồn tại trước đó, thì giá trị của phần tử mới này sẽ được dùng để ghi đè lên phần tử trước đó.*/


/*Chèn 1 phần tử vào map bằng insert */
//Hàm insert là một hàm thành viên trong class std:map, có tác dụng chèn một hoặc nhiều phần tử vào map cũng như tăng độ dài tương ứng của nó.

/*cú pháp mp.insert(std::pair<k_type,x_type>(k,v));

  pair<k_type , x_type> (k,v) - sử dụng để chỉ định kay và value của phần tử cần thêm
*/


/*Trong trường hợp không rõ kiểu, hoặc muốn rút bỏ chỉ định kiểu của key và value, 
  chúng ta có thể dùng hàm make_pair() để thay thế cho pair() trong hàm insert

  - cú pháp :  mp.insert( make_pair(k,v)); 

  - Hàm map insert sẽ trả về một cặp kết quả pair<iterator, bool> với iterator là trình lặp trỏ đến map kết quả,
    và bool là việc có thực hiện việc chèn hay không, dưới dạng 0 hoặc 1.

  */


/* - Đây là điểm khác biệt so với cách dùng toán tử [], vì khi một key đã tồn tại trong map, nếu chúng ta dùng toán tử [] thì 
     giá trị mới sẽ được ghi đè, còn nếu dùng hàm insert thì việc chèn sẽ thất bại. 
   - Trong trường hợp tất cả các phần tử chèn vào vốn đã tồn tại từ trước trong map, thì bản thân map ban đầu sẽ được trả về.
 

#include<iostream>
#include<map>
using namespace std;

void dump(map<char , int>& v){
	for(auto x: v)
		cout<<x.first<<" "<<x.second<<endl;
}
int main(){
	map<char, int> mp;

	mp['a'] = 100;
	mp['b'] = 200;

	// chèn phần tử vs key ch tồn tại 
	mp.insert(pair<char, int> ('c',300));
	//dump(mp);

	// chèn phần tử vs key đã tồn tại
	mp.insert(pair<char, int> ('a',3)); // nó sẽ k bị thay đổi gt

	// chèn phần tử bằng insert và make_pair
	mp.insert(make_pair('x',50));
	//dump(mp);

	//kt phần tử vs key tồn tại
	auto a = mp.insert(pair<char, int> ('a',3)); // 0 là k chèn đc - 1 là đc chèn
	cout<<a.second<<"\n"; 
	return 0;
 }
*/


/*chèn 1 phần tử với hàm emplace 
  - Hàm emplace là một hàm thành viên trong class std:map, có tác dụng chèn một hoặc nhiều phần tử vào map thông qua 
    hàm tạo của kiểu dữ liệu, cũng như tăng độ dài tương ứng của map.
   
  - cú pháp : mp.emplace(k,v);
    Hàm map emplace sẽ thực hiện việc chèn phần tử nếu key của nó chưa tồn tại trong map. Ngược lại nếu key đó đã tòn tại, 
    việc chèn thất bại và false sẽ được trả về


#include <iostream>
#include <map>
using namespace std;

//Tạo hàm xuất map
void dump(map<char,int>& mp)
{
    for (auto x: mp) {
        cout << x.first << ":" << x.second << " ";
    }
    cout << endl;
}

int main ()
{
    std::map<char,int> mymap;

    mymap.emplace('x',100);
    mymap.emplace('y',200);
    mymap.emplace('z',100);
    
    dump(mymap);
    return 0;
}

*/


/*chèn nhiều phần tử bằng insert 
  - cú pháp : mp.insert(itr_first , itr_last) 
*/


#include <iostream>
#include <map>
using namespace std;

void dump(map<int, const char*>& mp){
    for (auto x: mp) 
        cout << x.first << ": " << x.second << " ";
    cout << endl;
}


int main (){
    map<int, const char*> mp1 ={
            {1, "a"},
            {2, "b"},
            {3, "c"},
            {4, "d"},
            {5, "e"},
    };

    map<int, const char*> mp2;

    // chèn từ đầu đến phần tử có key < 4 từ mp1 vào mp2
    mp2.insert(mp1.begin() , mp1.find(4));
    dump(mp2);
    return 0;
}