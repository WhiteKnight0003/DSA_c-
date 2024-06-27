// kiểu vector hay mảng động - mảng có độ dài thay đổi 
// ưu điểm : có thể thay đổi độ dài 
// thư viện vector 
// cách khai báo vector<type> : data - data : tên biến
/* cách khai báo với số phần tử chỉ định vector<type> : data(length) 

    vector<int> v1;
	vector<double> v2(5);


	Với cách khai báo vector này thì các phần tử trong vector sẽ được gán giá trị mặc định tùy thuộc vào kiểu dữ liệu sử dụng
      -  Ví dụ, nếu dùng kiểu số như int, double thì các phần tử sẽ có giá trị mặc định bằng 0 : 
          vector<int> data1(3) //{0,0,0}

      - nếu dùng kiểu chữ như char, string thì các phần tử sẽ có giá trị mặc định bằng Null:
          vector<string> data2(3) // {, , }
	*/

/* có thể khai báo nhiều biến vector cùng 1 kiểu dữ liệu giống mảng 
      ví dụ vector<string> name , job, sex;
*/

/*Gán vector 
 data[index]  = value ;  data : tên biến , index : vị trí phần tử cần gán

 ví dụ :  
     vector<int> a(3);
     a[0] =1;
     a[1] =2;
     a[2] =5;
 */


/*Khởi tạo vector với các phần tử riêng biệt 
    - cú pháp :  vector<type> data{value1, value2, ....}
     vector<int> number{22,12,66} */ 

/*Khởi tạo vector với các phần tử giống nhau 
   - cú pháp : vector<type> data(length, value);
     vector<int> data(5,8) - {8,8,8,8,8} 
  */


/*Khai báo vector 2 chiều 
   vector <vector<type> >  data {v1,v2,v3,...}
     data : tên biến 2 chiều 
     v : các vector 1 chiều đc sử dụng như phần tử của vector 2 chiều 

     *  chúng ta cần phải viết thêm dấu cách giữa cặp dấu > > khi khai báo vector 2 chiều.
      Lý do là để phân biệt với toán tử >> được sử dụng để dịch chuyển bit

   
   // ví dụ 
   #include <iostream>
   #include <vector>   
   using namespace std;

   int main()
     {

    Khai báo vector 2 chiều
    vector<vector<string> > all_user{ 
        {"Kiyoshi", "male", "Hanoi"}, 
        {"Honda", "male", "Tokyo"}, 
        {"Ajinomoto", "female", "Osaka"}
        };
    return 0;
    }

     

     // hoặc

#include <iostream>
#include <vector>   
using namespace std;

    int main(){
    Khởi tạo các vector 1 chiều làm phần tử trong vector 2 chiều

    vector<string> user1{"Kiyoshi", "male", "Hanoi"};
    vector<string> user2{"Honda", "male", "Tokyo"};
    vector<string> user3{"Ajinomoto", "female", "Osaka"};

    Khai báo vector 2 chiều
    vector<vector<string> > all_user{ user1, user2, user3};
    return 0;
}

    */


/*Truy cập phần tử trong vector  - data[index]  */
#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<string> name{"chung","dang","dung"};
	cout<<name[0]<<endl;
	cout<<name[1]<<endl;
	cout<<name[2]<<endl;
	return 0;
}


// sự khác biệt giữa mảng và vector
           mảng                |                  vector
 - mảng tĩnh thừa hưởng từ c   |   - mảng động thêm từ c++
 - có kích thước cố định       |   - tự thay đổi kích thước
 - hiệu năng tốt hơn cho có    |   - hiệu năng kém hơn do con trỏ phải tìm
    kích thước cố định         |     để lấy dữ liệu trong các ngăn xếp
 - tốc độ nhanh hơn nhưng      |   - xử lý linh hoạt hơn nhưng tốc độ chậm hơn 1 chút
      xử lý bất tiện           |