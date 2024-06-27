#include<bits/stdc++.h>
using namespace std;

class Sinhvienn{
	private :
	  string id, ten;
	  double gpa;
	public:
		Sinhvien();
		friend istream& operator >> (istream &in, Sinhvienn &a){
			cout<<"Nhap id : "; cin>>a.id;
			cout<<"Nhap ten : "; cin.ignore();
			getline(cin,a.ten);
			cout<<"nhap gpa : "; cin>>a.gpa;
			return in;
		}
		friend ostream& operator <<(ostream &out, Sinhvienn a){
			cout<<a.id<<" "<<a.ten<<endl;
			return out; 
		};
		bool operator <(Sinhvienn a){
			return this->gpa<a.gpa;
		}
};

int main(){
	Sinhvienn x,y;
	cin>>x>>y;
	if(x<y)
		cout<<"yes";
	else cout<<"no";
	// cout<<x;
}
