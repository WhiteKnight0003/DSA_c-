#include<iostream>
#include<cassert>
using namespace std;

void max_element(const int *array, size_t size){
	assert( array!= NULL );
	assert( size >= 1);

	int max=array[0];
	int max_index=0;
	for(size_t i=0;i<size;++i)
		if(max<array[i]){
			max=array[i];
			max_index=i;
		}

	cout<<"Max = "<<max<<endl;
	cout<<"Tai vi tri : "<<max_index<<endl;
}

int main(){
	int array[100],n;
	cout<<"Nhap vao so phan tu : ";
	cin>>n;

	cout<<"Nhap mang : \n";
	for(int i=0;i<n;i++)
		cin>>array[i];

	max_element(array, n);
	return 0;
}