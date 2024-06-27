/* - Set trong C++ là một tập hợp các phần tử duy nhất được sắp xếp theo thứ tự cụ thể, và được sử dụng làm tiêu chuẩn để xử lý các đối tượng chứa nhiều phần tử
   - Mỗi phần tử trong set có giá trị phải là duy nhất, có nghĩa là nó không được trùng lặp với các giá trị còn lại trong set. 
     Ngoài ra thì phần tử trong set không thể thay đổi giá trị, tuy nhiên chúng có thể được chèn hoặc xóa khỏi set.
   - Nếu bạn thêm các phần tử mới không theo thứ tự cụ thể vào một set, chúng sẽ tự động sắp xếp lại theo giá trị trước khi được lưu trữ nội bộ.
   - cũng có một loại dữ liệu khá giống với set là multiset khi các phần tử trong chúng luôn được sắp xếp theo thứ tự.
     Tuy nhiên thì khác với multiset vốn cho phép các phần tử có thể trùng nhau cùng tồn tại, thì các phần tử trong set không được trùng nhau và luôn phải là duy nhất.

    
    loại           truy cập ngẫu nhiên        thêm xóa tìm kiếm ngẫu nhiên
    vector              o(1)                         o(N)
   set, multiset        chậm                         o(log N)

*/


/*Cấu trúc dữ liệu 
  - Cấu trúc dữ liệu set trong C++ thuộc dạng Red–black tree (cây đỏ đen) - một cây nhị phân, 
    là một cấu trúc dữ liệu trong khoa học máy tính để tổ chức các thành phần dữ liệu có thể so sánh.

  - Chúng ta cần đặc biệt lưu ý 3 điểm sau đây về Cấu trúc dữ liệu set trong c++:
   +  Trong các Node sẽ lưu giữ giá trị (value) cũng như con trỏ của các Node con (trái, phải) của nó.
   +  Các giá trị trong Node thỏa mãn điều kiện giá trị của Node con bên trái < Giá trị Node cha < Giá trị của Node con bên phải. 
      Do trong set không tồn tại giá trị trùng nhau nên dấu < được sử dụng.
   +  Độ sâu của các Node bằng nhau và cây Node thì cân bằng.

 */

/*Cách khai báo 1 set k thuộc kiểu dữ liệu nguyên thủy - ví dụ struct
 
 - Còn khi khai báo 1 set không thuộc kiểu dữ liệu nguyên thủy, ví dụ như struct chẳng hạn thì chúng ta phải 
 tự tạo ra toán tử so sánh nội bộ operator<() để làm rõ quan hệ lớn nhỏ giữa các phần tử như ví dụ sau:

 
 struct person(){
	string name;
	int num;
	}
	// định nghĩa toán tử so sánh nội bộ 
	bool operator<(const person &a  , const person &b){
	    return a.name < b.name;
	}
     
     set<person> st;  - khai báo set thuộc kiểu structn
*/

// các cách khai báo khác thì giống vector