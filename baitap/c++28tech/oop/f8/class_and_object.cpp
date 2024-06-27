// class  : bản thiết kế
// object : đối tượng 
//ví dụ : 1 con ng có tên , tuổi 

#include<bits/stdc++.h>
using namespace std;

class Person{
    public: // công khai
    	// Properties : thuộc tính
    	string name;
    	int age;
    	string address;

    	// constructor : hàm khỏi tạo
    	person(){} // k tham số - mặc định - 
    	person(string _name, int _age, string _address){
    		name = _name;
    		age = _age;
    		address = _address;
    	} // truyền tham số

    	// methods : hàm 
        void work(){
        	cout<<name<<" is working "<<address;
        }
    private:
      //string address = "vinh phuc"; // riêng tư
};

int main(){
	/*
	Person person1; // đối tượng person1 thể hiện cho Person 
	person1.name = "chung";
	person1.age = 21; 
	

	//cout<<person1.name<<"   "<<person1.age<<"   "<<person1.address;
	person1.work();
	*/

    Person person1{"chung ", 21, "vinhphuc"};
    	cout<<person1.name<<"   "<<person1.age<<"   "<<person1.address;
	return 0;
}