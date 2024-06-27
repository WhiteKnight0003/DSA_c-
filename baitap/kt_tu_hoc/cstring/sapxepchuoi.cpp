/*Sắp xếp kí tự theo bảng chữ cái 
- ta dung for lấy từng kí tự và so sánh chúng với nhau 

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str[256];
	cout<<"Nhap chuoi : ";
	cin>>str;

	int length = strlen(str); // tìm độ dài chuỗi

	char temp;

	for(int i=0;i<length-1;i++)
		for(int j=i+1;j<length;j++)
			if(str[i]>str[j]){
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
	// so sánh lần lượt các ký tự và hoán đổi giá trị

	cout<<str<<endl;
	return 0;

	// nó sẽ sắp xếp hết kí tự viết hoa trc r xếp còn lại kí tự viết thg
}
*/



/*Sắp xếp các chuỗi theo thứ tự chữ cái
- ở đây ta so sánh các chuỗi vs nhau bằng strcpy và in ra màn hình  */

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int num,i;
	cout<<"Nhap so chuoi can nhap :  ";
	cin>>num;

	cout<<"\n";
	char str[num][20], tmp[20];

	for(int i=0;i<num;i++){
		cout<<"Nhap vao chuoi thu : "<<i<<"  ";
		cin>>str[i];
	}

	// sắp xếp
	for( i=1;i<num;i++)
		for(int j=1;j<num;j++)
			if(strcmp(str[j-1],str[j]) >0 ){
				strcpy(tmp , str[j-1]);
				strcpy(str[j-1] , str[j]);
				strcpy(str[j] , tmp);
			}

	cout<<"\n"<<endl;
	for(int i=0;i<num;i++)
		cout<<str[i]<<endl;
	return 0;

	// in ra n dãy ( đc sắp xếp từ trên xuống theo thứu tự bảng chữ cái)
}