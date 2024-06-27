/*tìm vị trí cuối cùng của phần tử x trong mảng
#include<iostream>
#include<cassert>
using namespace std;

int arrayy(const int *array, size_t size , int x){
	assert(array != NULL);
	assert(size >=1 );
    
    for(size_t i=size-1; i>=0;i--)
    	if(array[i] == x)
    		return i;
}

int main(){
	int array[100],n,x;
	cout<<"nhap vao so phan tu : ";
	cin>>n;

	cout<<"Nhap mang : ";
	for(int i=0;i<n;i++)
		cin>>array[i];

	cout<<"Nhap x : ";
	cin>>x;

	 cout << "Vi tri cuoi cung cua "<<x <<" trong mang la "<<arrayy(array,n,x)<<endl;
	return 0;
}
*/


// tìm số chẵn lẻ cuỗi cùng

#include<iostream>
#include<cassert>
using namespace std;

int check_odd_even(int n){
	int flag =1;
	if(n%2==0)
		flag =0;
	return flag ;
}

int find_odd_last(int array[], size_t n){
     for(size_t i=n-1;i>=0;i--){
     	int x=array[i];
     	if(check_odd_even(x)== 0)
     		return x;
     }
} 

int find_even_last(int array[], size_t n){
     for(size_t i=n-1;i>=0;i--){
     	int x=array[i];
     	if(check_odd_even(x)== 1)
     		return x;
     }
} 

int main(){
	int array[100],n;
	assert(array != NULL);
	assert(n>=1);

	cout<<"Nhap so phan tu : ";
	cin>>n;

	cout<<"Nhap mang : ";
	for(int i=0;i<n;i++)
		cin>>array[i];

	cout<<"Gia tri chan max : "<<find_odd_last(array,n)<<endl;
	cout<<"Gia tri le max : "<<find_even_last(array,n)<<endl;
	return 0;
}