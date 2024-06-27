/*deque - double_end_queue - hàng đợi 2 đầu
  - là 1 mảng động tương tự vector - nhưng có khả năng thêm xóa phần tử ở cả đầu lẫn cuối mảng 
  đó với tốc độ cao 0(1) 
  - do có khả năng xử lý cả 2 đầu của mảng động nên nó còn được gọi là queue kép
  và đc sử dụng làm tiêu chuẩn để xử lý mảng động 

  - ** lưu ý : khác với vector thì phần tử deque không phải lúc nào cũng đc lưu trữ tại các địa chỉ 
  liên tiếp trong bộ nhớ , vì vậy việc lấy địa chỉ của 1 phần tử và chuyển nó dưới dạng 1 con trỏ đến 
  1 hàm khác có thể gây ra sự cố trong xử lý 

  - nếu bạn k chèn và xoas thường xuyên gần đầu mảng , bạn nên sử dụng vector
 */

// cách khai báo deque cũng giống vector cũng giống vector 

#include<iostream>
#include<deque>
using namespace std;

   deque<int> number(1,2,3,4,5,6); 1 2 3 4 5 6 
   deque<int> qq(5,8);////8 8 8 8 8
   return 0;
