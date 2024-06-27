/*Ý tưởng 
dùng vòng lặp for để lấy và so sánh từng ký tự trong chuỗi ban đầu 
vs kí tự cần tìm

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str[30]="letienchung";
	char chr='e';

	int len =strlen(str); //tính độ dài chuỗi

	for(int i=0;i<len;i++) 
		if(str[i] == chr)
			cout<<"\nVi tri ki tu xuat hien la : "<<i;
		return 0;
}
*/

/*Đếm số lần xuất hiện 
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str[30] = "letienchung";
	char chr = 'e';
	int dem=0;
	int a =strlen(str);
	for(int i=0;i<a;i++)
		if(str[i]==chr)
			dem++;
	cout<<dem<<endl;
	return 0;
}
*/

/*Tìm vị trí xuất hiện thứ n của 1 kí tự cho trước */
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str[30] = "letie nchung";
	char chr ='e';

	int n;
	cout<<"Nhap vao vi tri can tim : ";
	cin>>n;

	int a=strlen(str);
	int dem=0;
	for (int i=0;i<a;i++)
		if(str[i]== chr){
			dem++;
	      if(dem==n && dem>=n)
		     cout<<i<<endl;
		}
	return 0;
}