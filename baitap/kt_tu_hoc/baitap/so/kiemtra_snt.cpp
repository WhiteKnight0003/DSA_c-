#include<iostream>
using namespace std;
int ktsnt(int n){
	int flag=1; //1-> snt   0 -k phai snt
	if(n<2) return flag =0;
	int i=2;
	while(i<n){
		if(n%i==0){
			flag =0;
			break; // nhiều hơn 1 ước - dừng vòng lặp
		}
		i++;
	}
	return flag;
}

int main(){
	int n;
	cout <<"Nhap vao so tu nhien : ";
	cin>>n;
	if(ktsnt(n)==1) cout<<"SNT";
	else cout<<"K la SNT";
	return 0;
}