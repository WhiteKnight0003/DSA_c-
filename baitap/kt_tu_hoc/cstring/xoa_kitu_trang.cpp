/*Xóa all khoảng trắng
#include<iostream>
#include<cstring>
using namespace std;

char *deletee(char *str, char *p){
	int j=0;
	const int len = strlen(str);
	for( int i=0; i<len ;i++){
		char chr = str[i];
		//nếu ký tự là khoảng trắng - bỏ qua luôn
		if(isspace(chr))
			continue;

	p[j++] = chr;  // thêm kí tự vào kq
}
	return p;
}

int main(){
	char str[] = "  Hello World  ";
	char p[100];
	cout<<deletee(str,p)<<endl;
}

*/

/*Xóa khoảng trắng đầu cuối*/
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cctype>
using namespace std;

char *deleete(char *str){
	char *end; /*Khai con trỏ của kí tự cuối cùng*/

	//vòng lặp đầu tiên xóa khoảng trắng từ đầu chuỗi
	//Kiểu unsigned char: lưu các số nguyên dương từ 0 đến 255.
	while(isspace((unsigned char)*str))
		str++;

	//nếu vòng lặp thực hiện hết cả chuoixo trả về chuỗi str*
	if(*str == 0) return str;

	// end la vị trí cuối cùng - cũng là vị trí bắt đầu vòng lặp 2
	end = str+ strlen(str) -1;

	//vòng lặp thứ 2 để xóa khoảng trắng cuối chuỗi
	while(end > str && isspace((unsigned char)*end))
		end--;
	end[1] = '\0';

	return str;
}

int main(){
	const char *str1 = "    Hello World    ";
	char *tmp = strdup(str1);
	//strdup(str) - copy chuỗi ban đầu - trả về con trỏ chuỗi đó

	cout<<deleete(tmp)<<endl;

	// trách nhiệm giải phóng bộ nhớ thuộc về bên gọi
	free(tmp);
	exit(EXIT_SUCCESS);
}