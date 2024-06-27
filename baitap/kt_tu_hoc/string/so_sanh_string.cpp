/* 
Toán tử    |     Biểu thức điều kiện    |     ý nghĩa
   ==      |          x == y            |    x và y bằng nhau
   !=      |          x != y            |    x và y k bằng nhau
   >       |          x > y             |    x lớn hơn y
   <       |          x < y             |    x nhỏ hơn y
  >=       |          x >= y            |    x lớn hơn bằng  y
  <=       |          x <= y            |    x nhỏ hơn bằng  y


#include<iostream>
#include<string>
using namespace std;

int main(){
	string x1,x2,x3,x4;
	x1 ="AB";
	x2 ="AB";
	x3 ="aB";

	cout<< (x1 == x2) <<endl;  //1 - đúng
	cout<< (x1 != x2) <<endl;  //0 - sai
	cout<< (x1 <= x3) <<endl;  //1
	cout<< (x1 >= x3) <<endl;  //0
	return 0;
}
*/

/*ứng dụng so sánh string c++
- bằng việc so sánh string trong c++ , cta có thể sử dụng kèm lệnh if để tìm 1 
stru=ign từ trong vector string */

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	vector<string> strList = 
	{
		"abc" , "123" , "zzz" , "xyzzz"
	};
	int i=0;
	for(;i<int(strList.size());++i){
		if( strList[i] == "zzz")
			break;
	}
	if(i<(int)strList.size()){ 
		cout<<"have string";
	} else {
		cout<<"dont have string";
	}
	return 0;
}