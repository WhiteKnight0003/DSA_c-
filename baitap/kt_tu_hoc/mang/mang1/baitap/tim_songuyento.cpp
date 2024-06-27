#include<iostream>
using namespace std;

#define SIZE_OF_ARRAY(array)   sizeof(array)/sizeof(array[0])
int check_prinme_number(int n){
	int flag =1;
	if(n<2) return flag =0;
	int i=2;
	while(i<n){
		if(n%i==0){
			flag=0;
			break;  // tìm thấy 1 ước - thoát vòng lặp
		}
		i++;
	}
	return flag;
}

void show_prime_number(int array[], int length){

	for(int i=0;i<length;i++)
		if(check_prinme_number(array[i]) == 1)
			cout<<array[i]<<" ";
}

int main(){
	int array[] ={1,2,3,4,5,6,7,8,9};
	show_prime_number(array,SIZE_OF_ARRAY(array)) ;
	return 0;
}