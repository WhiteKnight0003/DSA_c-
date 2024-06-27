#include<iostream>
using namespace std;
int n;
int daonguocso(int n){
	int m=0;
	while(n>0){
		m=m*10+n%10;
	  n/=10;
	}
	  return m;
}
/*
ví dụ n = 101 
m=0  => m=0*10+1 (101%10=1)
n/=10 => n =10;
m=1  => m=1*10+0 ( 10%10=0)
n/=10 => n=1
m=10 => m=10*10+1 (1%10 =1) => m =101
*/
int kt(int n){
	int g=0;
	if(daonguocso(n)==n) g=1;
	return g;
}

int main(){
	cout<<"Nhap vao n : ";
	cin>>n;
	if(kt(n)==1) cout<<n<<" la so dao nguoc"<<endl;
	else cout<<n<<" k la so dao nguoc"<<endl;
}

