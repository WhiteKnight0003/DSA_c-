// foward_list là 1 danh sách liên kết đơn đc sử dụng làm tiêu chuẩn để xử lý các đối tượng chứa nhiều phần tử

/* Danh sách liên kết một chiều ở đây có nghĩa là từng Node trong danh sách sẽ chứa con trỏ chỉ đến vị trí của Node đứng sau nó,
 nên việc xác định vị trí của một Node trong danh sách sẽ trở nên dễ dàng hơn với độ phức tạp của thuật toán sẽ là O(1) mà thôi.

 - Khác với vector với các phần tử được lưu trong một mảng động thì phần tử trong list và forward_list lại được lưu trong 
các phân vùng bộ nhớ độc lập được gọi là Node. Và những node này được liên kết tuần tự với nhau thông qua con trỏ của chúng.

 - Với list, mỗi node sẽ lưu trữ các con trỏ của cả các node trước và sau node hiện tại, trong khi với forward_list, chỉ có con trỏ chỉ tới node sau node hiện tại được lưu giữ mà thôi.
*/

/* trong forward_list k tồn tại hàm size() nên để lấy kích thước phải dùng hàm 
template function là std::distance()
*/

/*So với vector, array hay deque thì forward_list và list có tốc độ thêm xóa phần tử ngẫu nhiên nhanh hơn ,
 nhưng bù lại thì tốc độ truy cập ngẫu nhiên cũng vì thế mà chậm hơn 

 loại                          truy cập ngẫu nhiên          thêm xóa ngẫu nhiên 
 vector, array , deque               o(1)                            o(N)                    
 forward_list , list                 o(N)                            o(1) 

 */

//CÁC CÁCH KHAI BÁO ĐỀU GIỐNG VECTOR


