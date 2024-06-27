/*hay vì truyền trực tiếp một giá trị và xử lý giá trị đó trong hàm thì chúng ta sẽ truyền con trỏ chỉ tới nó, 
và xử lý gián tiếp nó thông qua con trỏ.


#include<iostream>
using namespace std;

void funcA(int i){ // khai báo hàm dùng biến làm đối số
	i=7;
}
*** hàm funcA truyền giá trị của biến a vào hàm ;
ở đây 1 bản sao giá trị của biến a sẽ được copy , 
rồi truyền vào biến i và xử lý trong hàm vì đặt a=1 nên i k làm thay đổi giá trị a


void funcB(int *i){
	(*i) = 222;
}
*** hàm funcB truyền con trỏ của biến a vào hàm ;
biến i trong hàm sẽ chỉ đến địa chỉ biến a trên bộ nhớ nên i thay đổi a thay đổi 

int main(){
	int a=1;
	cout<<a<<endl;
	funcA(a); 
	cout<<"A = "<<a<<endl;  A=1
	funcB(&a);
	cout<<"A' = "<<a<<endl; A'= 222
	return 0;

}
*/



/*Bằng cách truyền con trỏ vào hàm trong C++,
 chúng ta có thể thay đổi gián tiếp các đối tượng như biến, mảng, chuỗi hoặc cấu trúc trong chương trình.
 */


/*Truyền con trỏ biến vào hàm c++
#include <iostream>
using namespace std;
 
void swap(int *x, int *y) {
    int tmp;
 
    tmp = *x;
    *x = *y;
    *y = tmp;
}
 
int main() {
   int num1 = 123;
    int num2 = 456;
 
    cout << "Truoc khi hoan doi ：num1 = "<< num1 <<", num2 = "<< num2 <<endl;
    swap(&num1, &num2);
    cout << "Sau khi hoan doi ：num1 =  "<< num1 <<", num2 = "<< num2;
 
    return 0;
}

Do chúng ta không truyền giá trị biến, mà truyền địa chỉ của biến (con trỏ biến), nên khi gọi hàm swap(),
chúng ta cần thêm toán tử & để lấy địa chỉ của các biến khi truyền vào hàm.
 */


/* Truyền con trỏ mảng vào hàm 
#include <iostream>
using namespace std;

//Tạo hàm đảo ngược mảng
void reverse(int* array, int size)
{    
    //Tạo vòng lặp để hoán đổi số đầu với số cuối trong mảng
     và thu dần khoảng cách về giữa mảng
    for (int i = 0; i < size / 2; ++i) {
        //Thực hiện phép hoán đổi
        int temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
}

//Tạo hàm in phần tử trong mảng
void show_array(int array[], int length){
  for(short i = 0; i < length; i++)  cout << array[i] <<' ';  
  cout << endl;
}

int main()
{
    int array1[] = {11, 22, 33, 44,};
    int array2[] = {0, 1, 2, 3, 4, 5};

    //Lấy độ dài mảng ban đầu
    int size1 = sizeof array1 / sizeof(int);
    int size2 = sizeof array2 / sizeof(int);
    
    reverse(array1, size1);
    reverse(array2, size2);

    //in mảng kết quả
    show_array(array1,size1);
    show_array(array2,size2);

    return 0;
}

*/