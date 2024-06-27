/*Có 2 cách tách chuỗi
Cách 1 : dùng hàm isdigit(): tách số bằng cách kiểm tra từng ký tự
cách 2 : dùng hàm strtok() */

/*Cách 1 : dùng hàm isdigit() 
- dùng để kiểm tra chuỗi có phải số k 
- kiểm tra từng ký tự trong chuỗi có phải số k nếu là số tách ra khỏi chuỗi


#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main(){
	char str[]= "AA12A2hgf44j";
	char p[100];
	int n=0;
	int i=0;
	for( i=0;i<=strlen(str);++i){
		//kt ký tự thứ i có phải số k 
		//nếu là chuỗi lưu vào p
		if(isdigit(str[i])){
			p[n]=str[i];
			n++;
			p[n]='\0';
		}
		else if(n){
			cout<<p<<endl;
			n=0;
		}
	}
	return 0;
}

*/

/*Cách 2 dùng strtok()
*/
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str[] = "aaa100dfs3s444";
	char *p,*q;
	p=str;
	while(q=strtok(p,"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz")){
		p=NULL;
		cout<<q<<endl;
	}
	return 0;
}

/*cách 2 này cần phải chỉ định toàn bộ kí tự k phải là số trong đối ố 
ký tự phân tách trong hàm strtok*/