/*Thêm phần tử vào mảng hay còn gọi là chèn phần tử vào mảng 
- là xử lý nhằm  thêm 1 phần tử vào 1 vị trí trong mảng có sẵn*/

/*Phạm vi bộ nhớ 
1   3   4   5   NULL   NULL  - Null các phần tử chưa sử dụng
muốn thêm phần tử 2 vào
1   2   3   4    5     NULL
 */

 /*Thêm phần tử vào cuối mảng 
#include<iostream>
using namespace std;

int main(){
	short a[6] = {1,2,3,4};
	   // 1 2 3 4 0 0

	a[4] = 5;
	a[5] =6;
	for(int i=0;i<6;i++)
		cout<<a[i]<<" ";
	return 0;
}
*/ 


/*Thêm vào vị trí bất kì */
#include<iostream>
using namespace std;
int a[100] ,length;

void nhapmang(int a[], int length){
	// length : độ dài mảng 
	for(short i=0;i<length;i++){
		cout<<"Nhap phan tu thu "<<i<<" : ";
	    cin>>a[i]; 
	}
}

void xuatmang(int a[], int length){
	cout<<"\nMang da nhap la : \n";
	for(int i=0;i<length;i++)
		cout<<a[i]<<"\t";
}

void chenphantu(int a[], int length){
	short n,m;
	cout<<"\nNhap vao phan tu can chen : ";
	cin>>n;

	cout<<"Nhap vi tri can chen : ";
	cin>>m;

	int b[100];
	for(int i=0;i<m;i++)
		b[i] =a[i];  // sao chép từng phần tử trc vị trí cần chèn
	b[m] = n;  // gán vị trí cần chèn
	for(int i=m;i<length;i++)
		b[i+1]=a[i];  // gán phần tử i+1 của b = phần tử i của a

	for(int i=0;i<=length;i++)
		cout<<b[i]<<" ";
}

int main(){
	nhapmang(a,3);
	xuatmang(a,3);
	chenphantu(a,3);
	return 0;
}