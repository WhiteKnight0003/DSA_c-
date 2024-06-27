/* kiem tra phan tu trung nhau bằng cách so sánh phâng tử 
#include <iostream>
using namespace std;

 Tạo macro SIZE_OF_ARRAY để lấy độ dài (số phần tử) của mảng chỉ định
#define SIZE_OF_ARRAY(array)  (sizeof(array)/sizeof(array[0]))


Tạo hàm kiểm tra phần tử trùng trong mảng C++
int ktphantu(const int* a, size_t size){
    //flag =  1 =>  tồn tại phần tử trùng nhau
    //flag =  0 =>  không tồn tại phần tử trùng nhau
    int flag = 0;
    for (size_t i = 0; i < size - 1; ++i) 
        for (size_t j = i + 1; j < size; ++j) 
            if (a[i] == a[j]) {
                flag = 1;
                break;
            }

    return flag;
}

int main(){
    int a1[] = {1,2,3,2,5}; 
    int a2[] = {1,2,3,4,5,6,7}; 

    if (ktphantu(a1,SIZE_OF_ARRAY(a1)) == 1) 
    	cout << "ton tai phan tu trung nhau";
    else cout << "khong ton tai phan tu trung nhau";
    cout << endl;

    if (ktphantu(a2,SIZE_OF_ARRAY(a2)) == 1) 
    	cout << "ton tai phan tu trung nhau";
    else cout << "khong ton tai phan tu trung nhau";
    cout << endl;

    return 0;
}
*/