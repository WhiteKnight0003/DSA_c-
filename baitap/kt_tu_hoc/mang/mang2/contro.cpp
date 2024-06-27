/* khai báo mảng 2 chiều dưới dạng con trỏ

#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int m,n;
	cout<<"Nhap so hang + cot : ";
	cin>>m>>n;

	int **nums1;  
	// cấp phát bộ nhớ động cho 1 mảng mẹ gồm m phần tử (1 hàng ) để chứa địa chỉ tương ứng của m hàng 

	// gán địa chỉ mảng
	nums1 =(int **)malloc((sizeof(int *)*m));

	// cấp phát bộ nhớ cho y mảng con - mỗi mảng con có x phần tử 
	for(int i=0;i<m;i++)
		nums1[i] = (int*)malloc(sizeof(int)*n);

	//truy cập và gán giá trị lần lượt vào các phần tử của m mảng con

	cout<<"\nNhap phan tu : \n";
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>nums1[i][j];

    cout<<"\nMa tran da nhap la : \n";
    for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cout<<nums1[i][j]<<"\t" ;
	cout<<"\n";
    }

    for(int i=0;i<m;i++)
    	free(nums1[i]);

    free(nums1);
    return 0;
}

*/


/* khai báo mảng 2 chiều dưới dạng con trỏ mảng 1
#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int y,x;
	cout<<"Nhap vao so hang + cot : ";
	cin>>y>>x;

	int *nums2;
	// cấp phát bộ nhớ động cho 1 mảng gồm y*x phần tử 
	// gán địa chỉ mảng trên vào con trỏ nums2
	nums2= (int *)malloc(sizeof(int*)*x*y);

	cout<<"\nNhap Mang : \n";
	for(int i=0;i<y;i++)
		for(int j=0;j<x;j++)
			cin>>nums2[i*x+j];  // gán gt nhập từ bán phím

	cout<<"\nMang da nhap la :\n";
	for(int i=0;i<y;i++)
		for(int j=0;j<x;j++){
			if(j<x-1)
			   cout<<nums2[i*x+j]<<" ";
			else  
			   cout<<nums2[i*x+j]<<endl;
			}

	free(nums2);
	return 0;
}

*/



// dùng mảng 2 chiều trong struct 
#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct str{
	int x;
	int y; 
	int *arr;
}number;


void init_2d_array_struct( number *num){
	for(int i=0;i<num -> y ;i++)
		for(int j=0;j<num -> x ;j++)
			num->arr[i*num -> x +j] = i*num -> x+j;
}

int main(){
	number num;
	num.x = 3;
	num.y=5;

	// cấp phát bộ nhớ động cho 1 mảng gồm y*x phần tử
	num.arr=(int*)malloc(sizeof(int*)*num.x*num.y);

	init_2d_array_struct(&num);

	for(int i=0;i< num.y;i++)
		for(int j=0; j<num.x ;j++){
			if(j< num.x -1)
				cout<<num.arr[i*num.x +j]<<" ";
			else 
			    cout<<num.arr[i*num.x + j]<<endl;
		}

	free(num.arr);
	return 0;
}
