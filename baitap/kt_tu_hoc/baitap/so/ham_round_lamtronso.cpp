// cú nháp round(num)

/* để làm tròn số sau n dấu phẩy 

round(num*(10^n))/(num*(10^n));

(ví dụ khi muốn làm tròn 2 số sau dấu phẩy ta cần tăng số đó lên 10^2 để làm tròn kq
r lại giảm số đó đi 10^2 để đc số làm tròn sau 2 dấu phấy  )
*/

#include<iostream>
#include<cmath>
using namespace std;
float n; int m;

double lamtronso(float n, int m){
	int k=pow(10,m);
	double so = round(n*k)/k;
	return so;
}

int main(){
	cout<<"Nhap vao n va m: ";
	cin>>n>>m;
	cout<<"So da duoc lam tron la : "<<lamtronso(n,m)<<endl;
}