/* sap xep vs sort
#include<iostream>
#include<algorithm>
using namespace std;
int *a,n;
void nhapmang(int n, int a[]){
	for(int i=0;i<n;i++){
		cout<<"Nhap vao phan tu thu "<<i<<" : ";
		cin>>a[i];
	}
}

void xuatmang(int n, int a[]){
	cout<<"\nMang da nhap la : \n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
	cout<<endl;
}
void sapxep(int n, int a[]){
	sort(a,a+n);
	cout<<"Max = "<<a[n-1]<<endl;
	cout<<"Min = "<<a[0]<<endl;
}
int main(){
	cout<<"Nhap vao so phan tu : ";
	cin>>n;
	a=(int*)malloc((n+1)*sizeof(int));
	nhapmang(n,a);
	xuatmang(n,a);
	sapxep(n,a);
	return 0;
}
*/



/* max min vs qsort
#include<iostream>
#include<algorithm>
using namespace std;
int *a,n;
void nhapmang(int n, int a[]){
	for(int i=0;i<n;i++){
		cout<<"Nhap vao phan tu thu "<<i<<" : ";
		cin>>a[i];
	}
}

void xuatmang(int n, int a[]){
	cout<<"\nMang da nhap la : \n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
	cout<<endl;
}
int compareIntDecs(const void *a, const void *b){
	int aNum = *(int*)a;
	int bNum = *(int*)b;

	return bNum-aNum;  //sắp xếp giảm dần 
}
int main(){
	cout<<"Nhap vao so phan tu : ";
	cin>>n;
	a=(int*)malloc((n+1)*sizeof(int));
	nhapmang(n,a);
	xuatmang(n,a);
	qsort(a,n,sizeof(int),compareIntDecs);
	cout<<"Max = "<<a[0]<<endl;
	cout<<"Min = "<<a[n-1]<<endl;
	return 0;
}
*/





/*Tạo hàm max min*/
#include<iostream>
#include<algorithm>
using namespace std;
int *a,n;
void nhapmang(int n, int a[]){
	for(int i=0;i<n;i++){
		cout<<"Nhap vao phan tu thu "<<i<<" : ";
		cin>>a[i];
	}
}

void xuatmang(int n, int a[]){
	cout<<"\nMang da nhap la : \n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
	cout<<endl;
}
void timmax(int n, int a[]){
	int max=a[0];
	for(int i=1;i<n;i++)
		if(max<a[i])
			max=a[i];
	cout<<"Max = "<<max<<endl;
}

void timmin(int n, int a[]){
	int min=a[0];
	for(int i=1;i<n;i++)
		if(min>a[i])
			min=a[i];
	cout<<"Min = "<<min<<endl;
}
int main(){
	cout<<"Nhap vao so phan tu : ";
	cin>>n;
	a=(int*)malloc((n+1)*sizeof(int));
	nhapmang(n,a);
	xuatmang(n,a);
	timmax(n,a);
	timmin(n,a);
	return 0;
}
