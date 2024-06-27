#include<bits/stdc++.h>
using namespace std;

/* khi bạn muốn a đứng trước b trong thứ tự sắp xếp trả về 1 số âm (-1)
   khi bạn muốn a đứng sau b trong thứ tự sắp xếp trả về 1 số dương (1) */
// hàm trả về số âm 

int sum(int n){
	int res =0;
	while(n){
		res+=n%10;
		n/=10;
	}
	return res;
}
int cmp(const void *a, const void *b){
	int *x =(int*)a; // ép con trỏ void thành con trỏ integer
	int *y = (int*)b;
	/*
	if(*x<*y) // dùng phần tử giải tham chiếu 
		return -1;
	return 1;
	*/
	// hoặc 
	// return *x-*y; xs tăng 
	// return *y-*x; xs giảm
	//return abs(*x) -abs(*y); sắp xếp tăng theo gttd 
	/*  sắp xếp theo tổng cách chữ số số nhỏ hơn in ra trc  neu sum = nhau
	if(sum(*x) != sum(*y))
	      return sum(*x)-sum(*y);
	return *x-*y;
	*/

	// sx chẵn trước lẻ sau
	if((*x)%2==0 && (*y)%2==1)  // x chẵn y lẻ 
		return -1; // trả về x xếp trc 
	if((*x)%2==1 && (*y)%2==0) // x lẻ y chẵn 
		return 1;// trả về y xếp trc
	if((*x)%2==0 && (*y)%2==0)
		return *y-*x;
	return *x-*y;

	// gs x và y là 2 số nguyên tăng dần x-y 
}
int main(){
	int n; cin>>n;
	int a[n];
	for(auto &x: a)
		cin>>x;
	qsort(a,n,sizeof(int),cmp);
	for(auto x: a)
		cout<<x<<" ";
}