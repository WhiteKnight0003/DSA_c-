/* mảng trong c++ có kích thước cố định được quyết định khi khai báo mảng 
và k thể thay đổi kích thước mảng sau khi khai báo 
Chúng ta k thể xóa 1 phần tử khi đã tạo ra nó , chỉ có thể thay thế giá trị các phần tử cần xóa
thành giá trị NULL , và ghi nhớ các phần tử này mà thôi 

** NULL trong c++ nếu ở dạng char thì là \0 
                              int là số 0 
- về bản chất NULL có nghĩa là ký tự rỗng hay k tồn tại giá trị
   */

/*
mảng đã sử dụng hết phần tử 
int a[4] ={1, 2 , 3, 4} 
int_a[2]= NULL 
=>>> 1 2 0 4  =>> 1 2 4 0

Mảng ch sử dụng hết phần tử 
int a[6] = {1 , 2 , 3 ,4 ,0 ,0}
int_a[2] = NULL 
=>> 1 2 0 4 0 0
*/

/*Các bước thực hiện
- thay đổi giá trị của tất cả các phần tử  từ vị trí cần xóa trong mảng
bằng giá trị của phần tử đứng đằng sau nó
- thay đổi giá trị của phần tử cuối cùng thành NULL */


#include<iostream>
using namespace std;
int a[100], length;
void nhapmang(int a[], int &length){
	cout<<"Nhap vao so phan tu : ";
	cin>>length;
	for(int i=0;i<length;i++){
		cout<<"\nNhap vao phan tu thu : "<<i<<" : ";
		cin>>a[i];
	}
}

void xuatmang(int a[], int length){
	cout<<"\nMang da nhap la : \n";
	for(int i=0;i<length;i++)
		cout<<a[i]<<"  ";
}
/*Xóa 1 phần tử 
void deletee(int a[], int length){
	int n;
	cout<<"Nhap vi tri can xoa : ";
	cin>>n;
	for(int i=n;i<length-1;i++) //dịch phần tử về đầu mảng từ vị trí cần xóa
		a[i]=a[i+1];
	a[length-1]=0; // gán phần tử cuối cùng =0

	//for(int i=0;i<length-1;i++)
	//	cout<<a[i]<<"  ";

}
*/
// xóa nhiều phần tử
void deletee_nhieu(int a[], int length){
	int n;
	cout<<"\nNhap so vi tri can xoa : ";
	cin>>n;
	for(int i=0;i<n;i++){
		int m;
		cout<<"\nNhap vao vi tri can xoa ";
		cin>>m;
		for(int j=m;j<length-1;j++){
			a[j]=a[j+1];
			a[length-1] =0;//Xóa 1 phần tử
			length--; 
	}
   }
	for(int i=0;i<length;i++){
		cout<<a[i]<<"  ";
	}
}
int main(){
	nhapmang(a,length);
	xuatmang(a,length);
	//deletee(a,length);
	deletee_nhieu(a,length);
	return 0;
}