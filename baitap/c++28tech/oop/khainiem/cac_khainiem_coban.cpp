// encapsulation : tính đóng gói 
// access modifier : phạm vi của 1 thuộc tính 
//  + private 
//  + public 
//  + protected

//ví dụ :
#include<bits/stdc++.h>
using namespace std;

class sinhvien{
	private :
	 string id , ten , ns;
	 float gpa;

    public: 
    	// hàm k có tham số
    	sinhvien(){
    		cout<<"ham khoi tao duoc goi"<<endl;
    	}

    	// hàm có tham số
    	sinhvien(string id, string ten, string ns, float gpa){
    		cout<<"ham khoi tao co tham so duoc goi"<<endl;
    		id = ten= ns="";
    		gpa =0;
    		/*
    		this->id = id;
    		this->ten = ten;
    		this->ns = ns;
    		this->gpa = gpa;
    		 */
    	}
    	// ~sinhvien() - hàm sẽ bị hủy

    	 string getten(){
    		return this->ten; // lấy dữ liệu 
    	}

    	void setten(string ten){
    		this->ten=ten;
    	}
    	void xinchao(){
    		cout<<"hi"<<endl;
    	};
    	void dihoc();
};

// implementation
void sinhvien::dihoc(){
	cout<<"go"<<endl;
}

int main(){
	//sinhvien x; - k co tham số
	sinhvien x("1111","chung","26/12/2003",3.9);
	x.dihoc();
	x.xinchao(); 
	return 0;
}