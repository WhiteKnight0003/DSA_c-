#include<bits/stdc++.h>
using namespace std;

// sinh ra 2^n tập con 
/* vid 3
000 
001
010
011
100
101
110
111
bieu dien tu so o-> 2^n-1
cac cau hinh sau + 001
*/

// do phuc tap bai toan 2^n 1<=n<=15


/* de hieu
int n,x[100]; 

void ktao(){
	// cau hinh dau tien = 0 het
	for(int i=1;i<=n;i++)
		x[i]=0;
}

bool ktra(){
	for(int i=1;i<=n;i++)
		if(x[i]==0)
			return false;
	return true;
}
void sinh(){
	// bat dau tu bit cuoi cung
	// di tim bit 0 dau tien tinh tu ben phai
	int i=n;
	while(i>=1 && x[i]==1){
		x[i]=0;  // do cong 1 vao
		--i;  // dich sang ben trai
	}
	// tim duoc bit dau tien = 0 tinh tu ben phai
	x[i]=1;
}
int main(){
	cin>>n;
	ktao();
	while(ktra() == false){
		for(int i=1;i<=n;i++)
			cout<<x[i]<<"";
		cout<<endl;
		sinh();
	}
	for(int i=1;i<=n;i++)
			cout<<x[i]<<"";
	return 0;
} 
*/

/*ngan gon*/
int n, ok, x[100];

void ktao(){
	for(int i=1;i<=n;i++)
		x[i]=0;
}

void sinh(){
	int i=n;
	while(i>=1 && x[i]==1){
		x[i]=0;
		--i;
	}
	if(i==0)
		ok=false;
	else x[i]=1;
}

int main(){
	cin>>n;
	ok = true;
	while(ok){
		for(int i=1;i<=n;i++)
			cout<<x[i]<<"";
		cout<<endl;
		sinh();
	}
	return 0;
}
// bai toan : cho 2 mảng - chia mảng này thành 2 phần sao cho độ chênh lệch nhỏ nhất 
/* vd : 2 3 8 1 5
{2,8} , {5,3,1}
*/

/*
ví dụ 1 tập có 3 phần tử là 1 2 3
các tập con của nó :  {}   {1}   {2}  {3}  {1,2}  {1,3} {2,3} {1,2,3}  
hay                   000  100   010  001  110    101    011   111     - co thi la 1 , k co la 0 */