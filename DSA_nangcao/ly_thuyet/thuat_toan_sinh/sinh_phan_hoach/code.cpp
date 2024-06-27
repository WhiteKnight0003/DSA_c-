/* vidu 
5 = 
4 + 1
3 + 2
1 + 1 + 1 + 1 +1/.....
các số hạng đằng trước >= số hạng đằng sau

*/

/* cách làm 
xét số hạng cuối cùng
- nếu bẳng 1 continue;
- giảm đi 1 đơn vị 


ta sẽ xét với i=n-1;
n/i = k và n%i =x 
if x==0    n = k+ k
else n = k*n (k+ n  lần ) + x ( x kiểu gì cũng nhỏ hơn k nên sẽ ở cuối)
*/

#include<bits/stdc++.h>
using namespace std;

int n, ok , cnt, x[100];

void ktao(){
	cnt = 1; // số lượng cấu hình
	x[1] = n ; // khởi tạo với cấu hình cao nhất
}

void sinh(){
	int i = cnt;
	while(i>=1 && x[i] ==1){ // bỏ qua 1
		--i;
	}
	if(i==0){
		ok=0; // full 1
	}
	else {
		x[i]--;
		// vd 8 = 3 3 1 1  = 3 3 1 1 (giảm a[1] đi 1 )
		int thieu = cnt-i +1; // i=2 ; +1 là vì a[1] giảm 1 nên đằng sau sẽ có thêm 1 số 1
		int thuong = thieu / x[i];
		int du = thieu % x[i]; // thieu = thuong * g + du
		cnt = i; // đặt cờ
		for(int j=1;j<=thuong;j++){
			x[cnt+1]=x[i];
			++cnt;
		}
		if(du){
			x[cnt+1] = du;
			++cnt;
		}
	}
}

int main(){
	cin>>n;
	ktao();
	ok=1;
	while(ok){
		for(int i=1;i<=cnt;i++){
			cout<<x[i]<<" ";
		}
		cout<<endl;
		sinh();
	}
	return 0;
}

/* ví dụ với 5
ban đầu xây dựng cấu hình chỉ có 5 -> cnt =1 

sau (4 1) - i= cnt =1 (ở trên) 
a[i]-- =  a[1]-- = 4;
thieu = cnt - i +1 = 1- 1+1 = 1
thuong = thieu / a[i] = 1 / 4 = 0
du  = thieu % a[i] = 1 % 4 = 1
cnt = i = 1;
0 < 1 nen k xảy ra for
xảy ra if
a[2] = du
++cnt = 2


sau (3 2) 
i = cnt =2
a[i]-- = a[1]-- = 3 (4 1 mà gặp 1 thì bỏ qua )
thieu = cnt - i +1 = 2-1+1 = 2
thuong =  thieu / a[i] = 2/3 =0;
du = thieu % a[i] = 2
cnt = i=1;
0<1 k xảy ra for
xảy ra if 
a[2] = 2;
++cnt =2 ;


*/