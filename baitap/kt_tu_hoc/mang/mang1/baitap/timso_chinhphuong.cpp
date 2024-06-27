#include<iostream>
#include<cmath>
using namespace std;

#define SIZE_OF_ARRAY(array)  sizeof(array)/sizeof(array[0])

int find_square_number(int n){
	int flag =0;
	int i=0;
	while(i<=n){
		if(pow(i,2) == n){
			flag =1;
			break;
		}
		i++;
	}
	return flag;
}

void check_square_number(int array[], int length){
	int count =0;
	for(int i=0;i<length;i++)
		if(find_square_number(array[i]) ==1 ){
			cout<<array[i]<<" ";
			++count;
		}

	cout<<"\nSo so chinh phuong : "<<count<<endl;
	}


int main(){
	int array[]  = {1,2,3,4,5,6,7,8,9,16};
	int length = SIZE_OF_ARRAY(array);

	check_square_number(array,length);
	return 0;
}