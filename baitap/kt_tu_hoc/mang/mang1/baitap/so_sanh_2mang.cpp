/*có 2 cách so sánh 
- đối chiếu từng cặp phần tử 
- so sánh = memcmp 
- để so sánh 2 mảng - ta cần chúng có cùng kiểu dữ liệu và k thể dùng các toán tử so sánh
*/

/*So sánh từng cặp phần tử */
#include<iostream>
#include<cassert>
using namespace std;
int n,m,a[100],b[100];
void nhapmang(int &n,int &m, int a[], int b[]){
	cout<<"Nhap vao so phan tu cua mang thu 1 : ";
	cin>>n;
		for(int i=0;i<n;i++){
		cout<<"Nhap vao phan tu thu "<<i<<" : ";
		cin>>a[i];
	}

	cout<<"\nNhap vao so phan tu cua mang thu 2 : ";
	cin>>m;
	for(int j=0;j<m;j++){
		cout<<"Nhap vao phan tu thu "<<j<<" : ";
		cin>>b[j];
	}
}


void xuatmang(int n, int m, int a[],int b[]){
	cout<<"\nMang thu 1 la : \n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";

	cout<<"\nMang thu 2 la : \n";
	for(int j=0;j<m;j++)
		cout<<b[j]<<"  ";
}
int equal(   int n , int m,const int *a1 , const int *a2 ){
    // flag =1 - 2 mảng giống 
     //     =0 - 2 mảng khác 

	int flag =1;

	// kt đối số truyền vào mảng 

	assert(a1 != NULL);
	assert(a2!=NULL);
	assert(n!=0);
	assert(m!=0);

	// Nếu số phần tử của 2 mảng khác nhau , chúng khác nhau 
	if( n!=m) return flag =0 ;


	// kt từng phần tử 
	for(int i=0;i<n;++i)
		if(a[i] != b[i])
			return flag =0;

	return flag ;
}

void kq_equal(int n, int m, const int *a1, const int *a2){
	if(equal(n,m,a1,a2)==1) 
		cout<<"\n2 Mang bang nhau ";
	else 
       if(equal(n,m,a1,a2)==0) 
		cout<<"\n2 Mang khong bang nhau ";
}
int main(){
	nhapmang(n,m,a,b);
	xuatmang(n,m,a,b);
	kq_equal(n,m,a,b);
	return 0;
}