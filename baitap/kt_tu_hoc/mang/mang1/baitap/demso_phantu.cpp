#include<iostream>
using namespace std;

#define SIZE_OF_ARRAY(array)  sizeof(array)/sizeof(array[0])

void show_array(int array[] , int length ){
	for(short i=0;i<length;i++)
		cout<<array[i]<<" ";
	cout<<endl;
}
  // hàm đếm số phần tử giống nhau
int take_duplicate_element(const int *array, size_t size){
	int result[100] , count =0;

	for(size_t i=0; i<size -1 ;++i)
		for(size_t j=i+1;j<size;++j)
			if(array[i] == array[j]){
				result[count] = array[i];
				++count;
			}

	return count;
}


int main(){
	int array1[] = {1,2,3,2,4,5,3,4};
	cout<<"So phan tu giong nhau : "<<take_duplicate_element(array1, SIZE_OF_ARRAY(array1));
	return 0;
}