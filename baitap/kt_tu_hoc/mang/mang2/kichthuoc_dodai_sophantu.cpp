/* lấy kích thước - cú pháp sizeof a

ví dụ 1 
#include<iostream>
using namespace std;

int main(){
	int bangdiem[][3] = {{7,8,9},{2,3,4}};
	int size = sizeof bangdiem;
	cout<<size<<endl;  // 24
	return 0;


	Kết quả, chương trình trả về số 24, tương ứng với 24 byte mà mảng số 2 chiều này chiếm trong bộ nhớ máy tính.
	 Cũng dễ hiểu vì trong mảng số 2 chiều này chứa 6 phần tử là các số thuộc kiểu int, với mỗi số int cần 4 byte để lưu giữ nó. 
	 Vậy nên 6 phần tử sẽ là 6 x 4 bằng 24 byte.
}
  

ví dụ 2
#include <iostream>
using namespace std;
int main(){
    char s[][4] = {"ABC", "DE", "FGH"};

    int size = sizeof s; //12
    cout << size; 

    3 chuỗi ký tự trong mảng chuỗi 2 chiều, với kích thước là 4 byte tương ứng với 4 ký tự char ( kiểu char có kích thước 1 byte), 
    nên tổng kích thước sẽ là 1 x 4 x 3 bằng 12 như trên. 
}
*/


// lấy độ dài  - int x = sizeof(a[0]) / sizeof(a[0][0]);

//ví dụ 1
#include<iostream>
using namespace std;

int main(){
	int array[][3] = {{7,8,9},{2,3,4}};

	//lấy độ dài 
	int y = sizeof(array)/sizeof(array[0]);
	int x = sizeof(array[0])/sizeof(array[0][0]);
	cout<<y<<" "<<x<<endl;
	return 0;
}

// y= 2; x=3