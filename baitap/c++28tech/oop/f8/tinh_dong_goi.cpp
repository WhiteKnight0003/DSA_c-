// k đc truy cập dữ liệu từ bên ngoài

#include<bits/stdc++.h>
using namespace std;

class Square{
   private:
   	 float side_length;
   public:
   	 void set_side_length(float _side_length){ // nhập dữ liệu 
   	 	side_length = _side_length;
   	 }

   	 float get_side_length(){ // trả về dữ liệu
   	 	return side_length;
   	 }
};

int main(){
	Square s1;
	s1.set_side_length(5);
	cout<<s1.get_side_length()<<endl;
	return 0;
}