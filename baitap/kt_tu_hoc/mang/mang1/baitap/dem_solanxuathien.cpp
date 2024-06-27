/*đếm số lần xuất hiện của 1 phần tử - đếm số lần xuất hiện của phần tử x trong mảng có n phần tử
#include<iostream>
using namespace std;

#define SIZE_OF_ARRAY(array)    sizeof(array)/sizeof(array[0])

int count_element_in_array(int *array, int size , int x){
	int count=0; 
	for(int i=0;i<size;i++)
		if(array[i]==x)
			count++;
	return count;
}

int main(){
	int array[] = {1,2,3,4,2,3,2,3,5,6};
	int x=2;

	cout<<"Phan tu "<<x<<" xuat hien "<<count_element_in_array(array,SIZE_OF_ARRAY(array),x)<<endl;
    return 0;	
}*/

//đếm số lần xuất hiện nhiều phần tử  - nên sắp xếp trc
#include<iostream>
#include<cstdlib>
using namespace std;

#define SIZE_OF_ARRAY(array)  sizeof(array)/sizeof(array[0])

void show_array(int array[], int length){
	for(int i=0;i<length;i++)
		cout<<array[i]<<" ";
	cout<<endl;
}

int CompareIntAsc(const void *a, const void *b){
	int aNum = *(int*)a;
	int bNum = *(int*)b;

	return aNum-bNum;
}

void array_unique(int *array, size_t size){
	int count =1;
	for(size_t i= size-1;i>0;--i){
		if(array[i]==array[i-1])
			count++;
		else{ 
		  cout<<"Phan tu "<<array[i]<<" xuat hien "<<count<<" lan"<<endl;
		  count=1;
	}
  }
    cout<<"Phan tu "<<array[0]<<" xuat hien "<<count<<" lan"<<endl;
}

int main(){
	int array[]= {1,2,3,4,5,6,7,1,2,3,2,3,5};
	qsort(array,SIZE_OF_ARRAY(array),sizeof(int),CompareIntAsc);
	array_unique(array,SIZE_OF_ARRAY(array));
	return 0;
}