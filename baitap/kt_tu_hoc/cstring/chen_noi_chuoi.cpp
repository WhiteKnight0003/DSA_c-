/*hàm assert() dùng để đánh dấu biểu thức và phát hiện lỗi logic
+) nếu đầu vào có gt false (0) hàm assert() sẽ in ra thông báo lỗi - sau đó gọi hàm about() để kết thúc chương trình
+) Nếu biểu thức đầu vào có giá trị true (1) hàm assert() sẽ k làm gì - chương trình chạy bthg
+) Định dạng của thông báo lỗi phụ thuộc ứng dụng gọi hàm assert()
+) Nếu là Console application thì thông báo lỗi sẽ được hiển thị lên màn hình console như khi chúng ta sử dụng lệnh printf()
+) Nếu là ứng dụng Win32 (ứng dụng có giao diện window), thì hàm assert( ) sẽ gọi hàm MessageBox( ) hiển thị 1 cửa sổ message box với button “OK”. 
Nếu bạn click vào button “OK”, ứng dụng Win32 của bạn sẽ kết thúc ngay lập tức.
*/


/*hàm size_t strlen(const char*str)    - tính toán độ dài chuỗi k bao gồm kí tự null kết thúc*/

// có 2 phương pháp chèn chuỗi khác vào

/*Cách 1
- nếu bạn có thể dự đoán trước kích thước độ dài của chuỗi ký tự sau khi chèn
bạn có thể chuẩn bị một mảng có kích thước dự đoán trước và chèn mảng

1. bắt đầu từ vị trí cần chèn , cta dịch chuyển dần về phía sau lượng ký tự bằng đúng
với số ký tự của chuỗi cần chèn và tạo ra các ô trống

2. sao chép chuỗi ký tự cần chèn vào các cô tróng vừa tạo

#include<iostream>
#include<cassert>
#include<cstring>
using namespace std;
#define SIZE_OF_ARRAY(array)   (sizeof(array)/sizeof(array[0]))

 str1 : chuỗi ban đầu ( không chấp nhận NULL)
str1_size : độ dài chuỗi str1
pos : vị trí chèn (tính từ đầu chuỗi s1)
str2 : chuỗi chèn vào 

char* str_in(char *str1,size_t str1_size, size_t pos , const char* str2){
	assert(str1 != NULL);  
	assert(str2 != NULL);

	size_t len1 = strlen(str1);
	size_t len2 = strlen(str2);

	//kiểm tra str1 có đủ độ dài để chèn str2 k
	assert(len1 + len2 <str1_size);

	//kiểm tra vị trí chèn có nằm trong chuỗi str1 k
	assert(len1 >= pos);

	// làm trống 1 phạm vi dài với len 2 ký tự , từ str1[pos]
	// dịch chuyển chuỗi ban đầu về sau - cả \0

	memmove(&str1[pos + len2], &str1[pos], len1 - pos +1);

	//copy str2 và dán vào khoảng trống ms tạo
	memcpy(&str1[pos], str2, len2);
	return str1;
}

int main(){
	char str[10] = "abcde";
	cout<<str_in(str, SIZE_OF_ARRAY(str), 2, "xyz");
	return 0;
}
*/



/*Cách 2 cấp phát bộ nhớ khi chèn chuỗi
*/
#include<iostream>
#include<cassert>
#include<cstdlib>
#include<cstring>
using namespace std;

#define SIZE_OF_ARRAY(array)   (sizeof(array)/sizeof(array[0]))

/*Chèn chuỗi 
str1 : chuỗi ban đầu 
pos vị trí chèn
str2 : chuỗi chèn 
Giá trị trả về : con trỏ mảng chứa kq . nếu thất bại trả về NULL 
*/
//size_t thực chất chính là unsigned int. Đây là kiểu số nguyên dương.
char *strr(const char *str1, size_t pos, const char *str2){
	assert(str1 != NULL);
	assert(str2 != NULL);

	size_t len1 = strlen(str1);  // gán len1 = độ dài của chuỗi 1 tính từ vị trí 1(kí tự đầu tiên)
	size_t len2 = strlen(str2);

	assert(len1 >=pos); // kt vị trí chèn có nằm trong chuỗi 1

	size_t m_size = len1 + len2; //kích thước của len kq = tổng độ dài 2 chuỗi

	char *m=(char *) malloc(sizeof(char)*m_size);

	if(m == NULL) return NULL;

	memcpy(m,str1,pos); //sao chép chuỗi 1 tới vị trí cần chèn

	memcpy(&m[pos],str2,len2); //copy chuỗi cần chèn vào chuỗi trên

    strcpy(&m[pos+len2] , &str1[pos]); 
    //copy phạm vi từ vị trí cần chèn tới cuối chuỗi ban đầu vào chuỗi kết quả
    // thêm ký tự '\0' vào kq

    return m;
}

int main(){
	char str[]= "abcde";
	char *m=strr(str,2,"xyz");
	if(m != NULL)
		cout<<m<<endl;
	free(m);
	return 0;
}