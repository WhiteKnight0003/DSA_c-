#include<iostream>
#include<cctype>
#include<cstring>
#include<cstdlib>
#include<time.h>
using namespace std;

void randd(int length , char *result){
	int i;
	char str[] = "345678tyhdfghjcvb";
	for( i=0;i<length;i++)
		result[i]= str[rand() % sizeof(str)];
	result[length] =0;
}

int main(){
	int length;
	cout<<"Nhap vao do dai chuoi : ";
	cin>>length;

	char result[length+1];
	srand(time(NULL));

	randd(length,result);
	cout<<result;
	return 0;
}