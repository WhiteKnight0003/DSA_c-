/* Cú pháp 
while( biểu thức điều kiện ){
	câu lệnh 1;
	câu lệnh 2;
	....
}

or while(biểu thức điều kiện) - câu lệnh


#include <iostream>
using namespace std;
int main(){
    int num = 1;
    while (num < 20){
        cout << num << endl;
        num = num * 3;
    }

    while(num<20) num*=3;
    cout<<num<<endl;
    return 0;
}
//1
//3
//9


*/


/*Dùng continue để bỏ qua số lần lặp và break để dừng vòng lặp
*/
#include <iostream>
using namespace std;
int main(){
    int total = 0;
    int num = 1;

    while (num < 11){
        if(num == 2){
     cout << "CONTINUE!\n"; //num =2 in ra continue rồi nhảy sang num=3 luôn
            num ++;
           continue; //tương tự nếu ở đây là break thì sẽ in ra break và dừng vòng lặp
        }
        cout << num << endl;
        total += num;
        num ++;
  
   }
   cout << "SUM= "<<total;
   return 0;
}
