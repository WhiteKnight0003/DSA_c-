#include<iostream>
using namespace std;
int n;

int timsodaonguoc(int n){
	int s=0;
	while(n>0){
		s=s*10+n%10;
		n/=10;
	} return s;
}

int main(){
	cout<<"Nhap vao n: ";
	cin>>n;
	if(timsodaonguoc(n)>10)
	cout<<"So nghich dao cua "<<n<<"la : "<<timsodaonguoc(n)<<endl;
else cout<<"So nghich dao cua "<<n<<"la : 0"<<timsodaonguoc(n)<<endl;
}