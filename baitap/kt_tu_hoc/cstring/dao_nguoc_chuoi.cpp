//dùng while để lấy từng kí tự r so sánh chúng vs nhau

#include<iostream>
#include<cstring>
using namespace std;

void daonguoc(char str[]){
	int i=0;
	int length ;
	for(length =0;str[length] != '\0';length++){}
	while(i<length){
		length--;
		char temp = str[i];
		str[i]=str[length];
		str[length]=temp;
		++i;
	}
}

int main(){
	char str[100];

	cout<<"Nhap vao chuoi : ";
	cin>>str;

	daonguoc(str);
	cout<<str<<endl;
	return 0;
}