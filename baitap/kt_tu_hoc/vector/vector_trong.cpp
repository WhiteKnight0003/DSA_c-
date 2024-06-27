/*kiểm tra vector trống = hàm empty 
- là 1 thành viên trong class (vector) - có td kt 1 vector có trống hay k 

 -  cú pháp : v.empty() 

 - Hàm empty sẽ trả về true nếu vector đã cho là vector trống, và trả về false, nếu vector đã cho có chứa phần tử.
 

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> num;
	vector<int> number{1,2,3};

	if(num.empty())
		cout<<"empty"<<endl;
	else 
	    cout<<"no empty"<<endl;

	 if(number.empty())
		cout<<"empty"<<endl;
	else 
	    cout<<"no empty"<<endl;
	    return 0;
}
*/

/*làm trống 1 vector bằng hàm clear 
- thuộc class (vector) - có td làm trống 1 vector 

- cú pháp :  v.clear() 

-Lưu ý hàm vector clear sẽ làm trống vector chỉ định bằng việc xóa đi tất cả phần tử của nó.
 Tuy nhiên thì hàm vector clear sẽ không giải phóng bộ nhớ sử dụng cho việc lưu trữ dữ liệu đã dùng.

-Trong trường hợp muốn xóa phần tử và giải phóng bộ nhớ, hãy dùng hàm shrink_to_fit() để thay thế.


#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> num{1,2,3};
	num.clear();

	for(auto x: num)
		cout<<x<<" ";  // k in ra j

	return 0;
}

*/


/*giảm bộ nhớ bằng hàm shrink_to_fit 
- hàm shrink_to_fit là 1 hàm thuộc class(vector) có td tinh chỉnh và làm giảm bộ nhớ để lưu 1 vector
- hàm chỉ xóa bộ nhớ cấp phát thừa - chứ k làm giảm kích thước tối thiếu của vùng chứa vector
- thg đc sử dụ sau khi đã dùng hàm clear() để giải phóng bộ nhớ đã dùng để chứa vector đó 

- cú pháp : v.shrink_to_fit() */ 

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> num{1,2,3};
	num.clear();
	num.shrink_to_fit();
}