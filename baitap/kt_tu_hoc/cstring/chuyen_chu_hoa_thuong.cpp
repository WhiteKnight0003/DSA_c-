/*Chuyển chữ hoa sang chữ thường - hàm tolower() -  thuộc cctype
tolower(chr) 

#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

// hàm chuyển chuỗi hoa về chuỗi thường
char *chuyenchu(char *str,char *result){
	int pos =0;
	const int len =strlen(str);
	for(int i=0;i<len;i++){
		char chr = tolower(str[i]);
		result[pos++] = chr;
	} 
	return result;

}
int main(){
	char str[100]= "aBBc88CnNN";
	char result[100];
	cout<<chuyenchu(str,result) <<endl;
	return 0;
}
*/

/*Chuyển chữ thường thành chữ hoa - hàm toupper(chr) - như hàm tolower*/
#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;
char *chuyenchuoi(char *str, char *result){
	int pos=0;
	const int len =strlen(str);
	for(int i=0;i<len;i++){
		char chr=toupper(str[i]);
		result[pos++]=chr;
	}
	return result;
}
int main(){
	char str[100]="HHnnnKLLoo";
	char result[100];
	cout<<chuyenchuoi(str,result)<<endl;
}
