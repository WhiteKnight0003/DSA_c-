/*- là xử lý nhằm gán toàn bộ các phần tử của 1 mảng vào cuối của 1 mảng khác
*/

/*Dùng hàm memcpy() 
memcpy(dest_address , src_address , size); 
dest-address : con trỏ vị trí đầu cùng bộ nhớ dích  (dest  -> destination)  
src_address : con trỏ chỉ vị trí đầu vùng bộ nhớ nguồn (src  -> source)
size : kích thước cần copy 
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
	int a[]={1,2,3};
	int b[]={4,5};

	//tìm kích thước và chiều dài của các mảng cần ghép
	int length1 = sizeof a/sizeof(int);
	int length2 = sizeof b/sizeof(int);
	int s=length1+length2;
	/*Khai báo mảng vs độ dài đủ chứa 2 mảng trên */
	int result[s];

	//copy mảng đầu tiên 
	memcpy(result,a,sizeof a);

   //copy mảng thứ 2 vào cuối mang1 trong mảng kq
	memcpy(&result[length1],b, sizeof b);

	for(short i=0;i<s;i++)
		cout<<result[i]<<"  ";
	return 0;
}