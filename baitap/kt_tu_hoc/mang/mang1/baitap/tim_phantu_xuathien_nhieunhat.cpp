#include<iostream>
#include<cstdlib>
#include<cassert>
using namespace std;

#define SIZE_OF_ARRAY(array)  sizeof(array)/sizeof(array[0])

int CompareIntAsc(const void *a, const void *b){
	int aNum = *(int*)a;
	int bNum = *(int*)b;
	return aNum - bNum;
}

// hà1m phần tử xuất hiện nhiều nhất 
void array_unique(int *array, size_t size){
	int max[] = {0,0} ; // mảng max chứa kết quả - max[0] : phần tử xh nhiều nhất
	                   // max[1] // số lần xuất hiện
	int count =1;
	for(size_t i = size -1;i>0;--i){
		if(array[i] == array[i-1]) 
			++count; // thấy phần tử trùng nhau thì tiếp tục đếm
	    else {
		// so sánh số lần xuất hiện vs max[1]
	    	if(max[1]<count){
	    		max[0] = array[i];
	    		max[1] = count ;
	    	}
	    	count =1;
	}
}
	cout<<"Phan tu "<<max[0]<<" Xuat hien nhieu nhat voi so lan : "<<max[1]<<endl;
}

int main(){
	int array[] = {2,3,4,2,3,5,2,1,2,4};
	int length=SIZE_OF_ARRAY(array);
	qsort(array,length,sizeof(int),CompareIntAsc);
	array_unique(array,length);
	return 0;
}