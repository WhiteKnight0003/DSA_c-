#include<bits/stdc++.h>
using namespace std;

class Sinhvien{
	private:
		string name, id;
		float gpa;
		static int dem; // static biến dùng chung
	public :
	    Sinhvien(){};
	    void tangdiem(){
	    	++dem;
	    }
	    int getdem(){
	    	return dem;
	    }
	    void nhap(){
	    	++dem;
	    	this->id = "SV" +string(3-to_string(dem).length(),'0')+to_string(dem);
	        // dem =1; => SV001
	        cout<<"nhap ten : "; getline(cin,this->name);
	        cout<<"nhap gpa : ";cin>>(this->gpa);
	        cin.ignore();
	    };
	    void in();
};

int Sinhvien::dem=0;
void Sinhvien::in(){
	cout<<this->name<<"    "<<this->gpa<<endl;
}

int main(){
	Sinhvien x;
	x.nhap();
	x.in();
	cout<<x.getdem();
	return 0;
}