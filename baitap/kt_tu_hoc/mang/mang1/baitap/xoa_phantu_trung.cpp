/*xóa phần tử trung nhau đã được sắp xếp - ý tưởng - dùng qsort

#include<iostream>
#include<cstdlib>
using namespace std;

#define SIZE_OF_ARRAY(array)   (sizeof(array)/sizeof(array[0]))

void show_array(int array[], int length){
	for(short i=0;i<length;i++)
		cout<<array[i]<<" ";
	cout<<endl;
}

int compareIntAsc(const void *a , const void *b){
	int aNum = *(int*)a;
	int bNum = *(int*)b;

	return aNum-bNum;  // sắp xếp từ nhỏ đến lớn 
}

size_t array_unique(int *array , size_t size){
	size_t end=0;

	for(size_t i=1;i<size ;++i)
		if(array[i]  != array[end] ){  // tìm thấy phần tử trùng nhau 
			++end;
			array[end] =array[i];
		}  

	return end +1;
}

int main(){
	int array1[] = {7,2,6,7,8,9,8,2};
	int array2[] = {1,2,3,4,2,3,4,5};

	qsort(array1, SIZE_OF_ARRAY(array1), sizeof(int), compareIntAsc);
	qsort(array2, SIZE_OF_ARRAY(array2), sizeof(int), compareIntAsc);

	show_array(array1, array_unique(array1, SIZE_OF_ARRAY(array1)));
	show_array(array2, array_unique(array2, SIZE_OF_ARRAY(array2)));

	return 0;
}

*/


// xóa phần tử trùng - mảng chưa đc sắp xếp
#include<iostream>
#include<cstring>
using namespace std;

#define SIZE_OF_ARRAY(array)   sizeof(array)/sizeof(array[0])
void show_array(int array[], int length){
	for(short i=0;i<length;i++)
		cout<<array[i]<<" ";
	cout<<endl;
}

size_t array_unique(int *array, size_t size){
	for(size_t i=0; i<size-1;++i)
		for(size_t j=i+1;j<size;++j)
			if(array[i] == array[j]){ // tìm thấy phần tử trùng nhau
				//ghi đè phần tử array[j] bằng phạm vi từ array[j+1] đến cuối mảng , qua đó xóa array[j]
				memmove(&array[j] , &array[j+1] , sizeof(int)*(size-j-1));
				--size;   // do đã xóa array[j] nên độ dài mảng - 1 đơn vị
				//do có khả năng 3 phần tử trùng nhau xuất hiện liên tiếp 
				// nên chúng ta cần kiểm tra lại vị trí j bằng cách giảm giá trị của j 1 đơn vị
				--j;
			}

	return size;
}

int main(){
	int array1[] = {7,2,6,7,4,2,3,6};

	// xóa phần tử trùng nhau trong các mảng 
	show_array(array1, array_unique(array1, SIZE_OF_ARRAY(array1)));
	return 0;
}