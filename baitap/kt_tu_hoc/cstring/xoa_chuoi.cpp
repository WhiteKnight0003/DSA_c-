/*Xóa ký tự - kiểm tra từng ký tự nếu k giống ký tự cần xóa thì lấy 

#include<iostream>
#include<cstring>
using namespace std;

char *xoakitu(char *a, char str, char *b){
	int i;
	int j =0;

	// so sánh từng ký tự trong chuỗi a với ký tự cần xóa
	for(i = 0;a[i] !='\0';++i){
		// nếu ký tự đó khác lấy luôn
		if(a[i] != str){
			b[j] = a[i];
			++j;
		}
	}
	b[j]='\0';// gán ký tự cuối cùng = \0
	return b;
}

int main(){
	char a[50] = "abcdefgh";
	char b[50];
	char str = 'a';
	cout<<xoakitu(a,str,b)<<endl;
	return 0;
}

*/

/*Xóa ký tự cuối
#include<iostream>
#include<cstring>
using namespace std;

char *xoakytucuoi(char *str){
	const int len =strlen(str);
	if(len==0) 
		return NULL; // Nếu chuỗi ban đầu là NULL thì trả về \0
	else {
		//dịch chuyển ký tự kết thúc chuỗi để xóa ký tự cuối cùng
		str[len-1] = '\0';
		return str;
	}
}

int main(){
	char a[50] = "abcdefgh";
	cout<<xoakytucuoi(a)<<endl;
	return 0;
}

*/

// hàm strstr(str1,str2)  tìm vị trí chuỗi con str1 trong str2 
/*Xóa 1 chuỗi con */
#include<iostream>
#include<cstring>
using namespace std;

void xoachuoi(char* str1, char* str2){
	const int len =strlen(str2);
	char str3[100] = "";
	char *p1 = str1, *p2;

	//tạo vòng lặp xóa hết chuỗi con
	while((p2=strstr(p1,str2)) != NULL ){ //tìm vị trí chuỗi con
		strncat(str3,p1,p2-p1); // nối các phần k chứa chuỗi con
		p1=p2+len;
	}
	strcat(str3,p1);
	cout<<str3;
}

int main(){
	char str1[100] ="abcdefgh";
	char str2[100] = "bcde";
	xoachuoi(str1,str2);
	return 0;
}