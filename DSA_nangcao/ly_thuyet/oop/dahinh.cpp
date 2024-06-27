#include<bits/stdc++.h>
using namespace std;

class hinh{
protected:  // cho phép con truy cập trực tiếp các thuộc tính
	int cao,rong;
public:
	void set_value(int a, int b){
		cao =a;
		rong = b;
	}
	virtual getArea(){
		return 0;
	}
};

class hcn : public hinh{
public:
	int getArea(){
		return cao *rong;
	}
};

class tamgiac : public hinh{
public:
	int getArea(){
		return cao*rong/2;
	}
};

int main(){
	hcn a;
	tamgiac b;
	hinh *ptr1 = &a;
	hinh *ptr2 = &b; // lop cha tham chieu truc tiep den con

	ptr1->set_value(100,200); // gán giá trị
	ptr2->set_value(50,100);
	cout<<a.getArea()<<" "<<b.getArea()<<endl;

	// cha không thể truy cập vào các phương thức của con vd : ptr1 ->getArea() /// sai

	// sau khi có virtual ; cha có thể truy cập trực tiếp 
	cout<<ptr1->getArea()<<endl;
	cout<<ptr2->getArea();
}