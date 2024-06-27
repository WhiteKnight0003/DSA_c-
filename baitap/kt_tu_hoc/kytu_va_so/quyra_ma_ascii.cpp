
/* cú pháp chuyển từ kí tự sang ascii
 cout<< int(char);  - char - kí tự muốn chuyển 

 cú pháp chuyển số sang kí tự  
  cout << char(num) ;  - num - số nguyên dương muốn chuyển
*/
#include<iostream>
using namespace std;

int main(){
	cout<<int('a')<<endl;
	cout << char(97)<<endl;
	return 0;
}