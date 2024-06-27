#include<iostream>
#include<cassert>
using namespace std;

// tìm số nhỏ nhất và vị trí xuất hiện
void min_element( const int *array, size_t size ){
	// kiểm tra và báo lỗi nếu đối số truyền vào k thỏa mãn đk chạy hàm
	assert( array != NULL);
	assert(size >=1 );

	int min =array[0];
	int min_index=0;
	for(size_t i=1;i<size;++i)
		if(min>array[i]){
			min=array[i];
			min_index=i;
		}

	cout<<"Min = "<<min<<endl;
	cout<<"Tai vi tri : "<<min_index<<endl;
}

int main(){
	int array[100], n;
	cout<<"Nhap so phan tu : ";
	cin>>n;

	cout<<"Nhap mang : \n";
	for(int i=0;i<n;i++)
		cin>>array[i];

	min_element(array,n);
	return 0;
}

