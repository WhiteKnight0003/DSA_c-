/* - multiset trong C++ là một tập hợp các phần tử có thể trùng lặp được sắp xếp theo thứ tự cụ thể, 
     và được sử dụng làm tiêu chuẩn để xử lý các đối tượng chứa nhiều phần tử trong C++.

   - Các phần tử trong multiset có thể trùng với các phần tử khác, ngoài ra thì phần tử trong multiset không thể 
     thay đổi giá trị, tuy nhiên chúng có thể được chèn hoặc xóa khỏi multiset.

  Loại	          Truy cập ngẫu nhiên	    Thêm xóa tìm kiếm ngẫu nhiên
 vector              	O(1)                      	O(N)
 multiset, set       	chậm	                   O(log N)
*/

/*Chúng ta cần đặc biệt lưu ý 3 điểm sau đây về Cấu trúc dữ liệu multiset trong c++:
  - Trong các Node sẽ lưu giữ giá trị (value) cũng như con trỏ của các Node con (trái, phải) của nó.
  - Các giá trị trong Node thỏa mãn điều kiện giá trị của Node con bên trái <= Giá trị Node cha <= Giá trị của Node con bên phải. 
    Do trong multiset có thể trùng nhau nên dấu <= được sử dụng.
  - Độ sâu của các Node bằng nhau và cây Node thì cân bằng.
 */

// dùng chung thư viện vs set #include<iostream>
// các cách khai báo giống set
