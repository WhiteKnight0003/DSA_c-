/*Cú pháp 
  switch (expression){
  	case value1 :
	// xử lý nếu expression === value 1
	....
	break;
	case value2 :
	// xử lý nếu expression === value 2
	....
	break;
  default:
  	xử lý nếu giá trị của expression khong khớp với các value trên
  	....
  } 

expression - phải là 1 giá trị thuộc kiểu số 
case - là từ khóa bắt đầu cho các trg hợp
break - là lệnh để dừng switch sau khi hoàn thành xử lý ở các case tìm thấy (có thể lược bỏ)
default - từ khóa bắt đầu các xử lý trong trg hợp các gt expression k khớp với các gt trên
*/ 
#include <iostream>
using namespace std;

int main() {
  int sum = 8;
  switch (sum){
    case 2:
      cout << "Tổng bằng 2" << endl;
      break;
    case 8:
      cout << "Tổng bằng 8" << endl;
      break;
    case 10:
      cout << "Tổng bằng 10" << endl;
      break;
    default:
      cout << "Tổng bằng số khác" ;
  }
  return 0;
}
//Tổng bằng 8


