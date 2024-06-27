// hàm bn - k phải là member của class nhưng vẫn có thể truy cập vào private 
// lớp bn - 
#include<bits/stdc++.h>
using namespace std;

// forward declaration
class GiaoVien;
class SinhVien;

class SinhVien{
	friend class GiaoVien; // tất cả các public của GiaoVien có thể truy cập vào all private cua sinhvien
	private :
	   string ten;
	   float gpa;
	public: 
		SinhVien(string ten, float gpa){
			this->ten=ten;
			this-> gpa=gpa;
		}
		friend void inthongtin(SinhVien&);
		friend void chuanhoa(SinhVien&);
};


class GiaoVien{
private:
	string khoa;
public:
	void update(SinhVien&);
};

void GiaoVien::update(SinhVien& x){
	x.gpa=3.1;
}


void inthongtin(SinhVien &a){
	cout<<a.ten<<endl;
	cout<<a.gpa<<endl;
}

void chuanhoa(SinhVien &a){
	string res="";
	stringstream ss(a.ten);
	string token;
	while(ss>>token){
		res+=toupper(token[0]);
		for(int i=1;i<token.length();i++)
			res+=tolower(token[i]);
		res+=" ";
	}
	res.erase(res.length()-1);
	a.ten=res;
	cout<<a.ten<<endl;
}

int main(){
	SinhVien x("chung",3.9);
	inthongtin(x);
	chuanhoa(x);
	GiaoVien y;
	y.update(x);
	inthongtin(x);
	return 0;
}