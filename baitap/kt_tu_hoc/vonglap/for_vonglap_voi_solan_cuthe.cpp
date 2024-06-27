/* For vs 1 biến đếm Cú pháp 
for(biểu thức khởi tạo ; biếu thức điều kiện ; biểu thức thay đổi){
	câu lệnh 1;
	câu lệnh 2;
	...
}
*/

/*For vs nhiều biến đếm Cú pháp 
for( BTKT1 ; BTKt 2; BTĐK ; BTTĐ1  ; BTTĐ2){
	câu lệnh 1;
	câu lệnh 2 ;
	...
}
#include <iostream>
using namespace std;

int main(){
    for (int i = 1,j= 100; i < 5; i++, j--){
      cout << "i = "<< j << ",j = " <<j << endl;
    }
    return 0;
}

//> i = 1, j = 100
//> i = 2, j = 99
//> i = 3, j = 98
//> i = 4, j = 97

*/


/*lệnh continue bỏ qua lượt lặp hiện tại của vòng for
#include <iostream>
using namespace std;

int main(){
    int n;scanf("%d",&n);
    int dem = 0;

    for (int i =1; i<=n;i++){
      if (i == 3){
        continue;
      }
       cout << i <<endl;
       dem++;
    }   

    cout << "So phan tu da  dem la : "<<dem;

    return 0;
}
*/


/* Break - thoát khỏi vòng lặp for*/
#include <iostream>
using namespace std;

int main(){
    int n;scanf("%d",&n);
    int dem = 0;

    for (int i =1; i<=n;i++){
      if (i == 3){
        break;
      }
       cout << i <<endl;
       dem++;
    }   

    cout << "So phan tu da  dem la : "<<dem;

    return 0;
}
