/*Hàm strtok() 
strtok(str,sep) 
sep : kí tự (or chuỗi ký tự )cần tách (viết tắt của separator) 

- hàm này sẽ trả về vị trí đầu chuỗi của chuỗi con đầu tiên được tách 
từ chuỗi ban đầu dưới dạng con trỏ . Trong trg hợp k tìm thấy ký tự
phân tách giá trị NULL sẽ được trả về 
- cơ chế :
+ Điền ký tự kết thúc chuỗi \0 vào chuỗi ban đầu mỗi khi tìm thấy kí tự phân tách
nên hàm strtok() sẽ làm biến đổi chuỗi ban đầu
+  hàm strtok() chỉ có thể tách 1 chuỗi con bằng dấu phân tách từ chuỗi
ban đầu trong mỗi lần thực thi mà thôi


#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str[50] = "Ha Noi,Ninh Binh,Nam Dinh";
	char *p ;// khai báo con trỏ chuỗi để dứa kq

	p=strtok(str,",");
	cout<<p<<endl; 
	//kq  Ha Noi(hay Ha Noi\0) tức nó chỉ thực hiện 1 lần và tách ra 1 chuỗi con trước kí tự đánh đấu
}


vì vậy để nó thực hiện trên toàn bộ chuỗi thì cần dùng vòng lặp
*/


#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str[50] ="Ha Noi,Ninh Binh,Nam Dinh,Thanh Hoa";
	char *p;

	p=strtok(str,","); //tách chuỗi lần đầu 
	cout<<p<<endl;

	//tách chuỗi lần 2 trở đi
	//dùng strtok() tới khi kết quả NULL được trả về
	while(p!=NULL){
		//chỉ định đối số NULL trong hàm strtok để tiếp tục tách chuỗi
		p=strtok(NULL,",");
		if(p!=NULL)
			cout<<p<<endl;
	}
	return 0;
}

/*
kq 
Ha Noi
Ninh Binh
Nam Dinh
Thanh Hoa
*/

/*Lưu ý 
+ lần gọi hàm strtok đầu tiên và các lần sau là khác nhau 
+ trong lần dùng strtok đầu tiên ta phải chỉ định đối số của hàm là chuỗi ban đầu để tách chuỗi 
trong các lần tiếp theo ta phải chỉ định NULL làm đối số của hàm 
đối số này sẽ yêu cầu hàm tiếp tục tách chuỗi ban đầu đã truyền vào trước đó
Nếu cta chỉ định lại chuỗi ban đầu or 1 chuỗi khác thì kq hàm sẽ k tiếp tục tách nx mà xử lý lại từ đầu
+ khi không còn thấy kí tự phân tách kq sẽ trả về NULL, khi đó while sẽ kết thúc
*/