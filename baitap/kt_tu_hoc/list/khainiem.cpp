/* List trong C++ là một danh sách liên kết đôi được sử dụng làm tiêu chuẩn để xử lý các đối tượng chứa nhiều phần tử trong C++

- Danh sách liên kết đôi ở đây có nghĩa là từng Node trong danh sách sẽ chứa thông tin vị trí của Node đứng trước và sau nó, 
nên việc xác định vị trí của một Node trong danh sách sẽ trở nên dễ dàng hơn với độ phức tạp của thuật toán sẽ là O(1) mà thôi.

- Điều đó tạo ra ưu điểm của list trong C++ đó là, việc chèn và xóa một vị trí bất kỳ trong list có thể được thực hiện
 trong một thời gian cố định với tốc độ cao O(1)

- ngược lại cũng tạo ra nhược điểm của list trong C++, đó là chúng ta không thể thực hiện việc truy cập vào vị trí ngẫu nhiên trong list.
 Do vậy để truy cập vào một vị trí bất kỳ trong list thì chương trình luôn phải truy cập tuần tự bằng một trình lặp, khiến tốc độ xử lý sẽ trở thành O(n)

- so với list thì vector trong C++ tuy chỉ có khả năng thêm xóa phần tử vào vị trí cuối cùng, nhưng lại có ưu thế 
trong việc truy cập vào vị trí ngẫu nhiên với tốc độ cao.

*/

/* 
 loại      truy cập ngẫu nhiên      thêm xóa ngẫu nhiên
 vector        o(1)                      o(N)
 list          o(N)                      o(1)  
*/


/* Khác với vector với các phần tử được lưu trong một mảng động thì phần tử trong list và forward_list lại được lưu trong các phân vùng bộ nhớ độc lập
 được gọi là Node. Và những node này được liên kết tuần tự với nhau thông qua con trỏ của chúng.

Với forward_list, mỗi node sẽ lưu trữ con trỏ chỉ tới node sau nó, trong khi với list, con trỏ của cả các node trước và sau node đó đều được lưu giữ.
*/

// cách khai báo giống vector