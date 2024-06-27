// sinh tổ hợp - or chập con - k xét thứ tự
// chỉ liệt kê cái đại diện có thứ tự nhỏ nhất 
// vidu chọn {3 4 5} chứ k chọn {5 3 4}
#include<bits/stdc++.h>
using namespace std;

int n, k, x[100],ok;

void ktao(){
	for(int i=1;i<=k;i++){
		x[i]=i;
	}
}

void sinh(){
	// bat dau tu bit thu k, ktra xem phan tu x[i] dat gia tri max hay chua
	// x[i]=n-k+1 ?
	// x[i]=n-k+1 => khong the tang x[i] len duoc nua => dich sang trai
	// x[i] != n-k+1 => x[i]++, tat ca cac phan tu i+1 => k , se tang dan tu x[i] mot don vi
	int i=k;
	while(i>=1 && x[i] == n-k+i){ // khi x[i] khong da max 
		--i; // giam i di 1 don vi
	}
	// truong hop 1   1<= i <=k;
	// truong hop 2   i==0 // khi da gap cau hinh cuoi cung

	if(i==0)
		ok = false;
	else {
		x[i]++; // 1<=i<=n-k+i - no chua dat gia tri max o vi tri do
		for(int j=i+1;i<=k;i++) // chay tu o t2 -> o thu k
			x[j]=x[j-1]+1;  // o dang trc tang 1 don vi
	}
}
int main(){
	cin>>n>>k;
	ktao();
	ok=true;
	while(ok){
		for(int i=1;i<=k;i++)
			cout<<x[i];
		cout<<endl;
		sinh();
	}
	for(int i=1;i<=k;i++)
		cout<<x[i];
	return 0l;
}