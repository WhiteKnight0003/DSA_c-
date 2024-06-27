#include<bits/stdc++.h>
using namespace std;

// cho cac so tu 1-> n -> n! cach xep
// ban dau 1 2 3 .. n
// ket thuc n n-1 ... 3 2 1

// 485197632 lon hon no nho nhat 485213679 // 2 la nho nhat se tahy vi tri cua 1 va con lai se la cac so con lai

int n,x[100];
bool ok;
void ktao(){
	for(int i=1;i<=n;i++){
		x[i]=i;
	}
}
void sinh(){
	// bat dau tu i = n-1
	// chung nao a[i] > a[i+1] dich ve ben trai
	int i=n-1;
	while(i>=1 && x[i]>x[i+1]){
		--i;
	}
	// th1 i=0
// th2 a[i] < a[i+1]
	if(i==0)
		ok= false;
	else {
    	// a[i] <a[i+1]
    	// tim so dung sau vi tri i , > a[i] nho nhat co th
    	int j=n; // bo qua cac vi tri a[j] < a[i]
    	while(x[i]>x[j])
    		--j; // bo qua nhung so nho hon chi bat con lon hon dau tien
    	swap(x[i],x[j]); // doi cho xog sap tang dan i+1 -> n
    	reverse(x+i+1,x+n+1); // dung reverse mat o(n) cons sort maats o(nlogn)
    }
}   

// next_permutation(a,a+n) : sinh ra hoan vi ke tiep
// prev_permutation(a,a+n) : sinh ra hoan vi ke truoc
// [x,y] => 
// sort(a+x,a+y+1);
// reverse(a+x,a+y+1);
// next_permutation(a+x,a+y+1);
int main(){
	cin>>n;
	ktao();
	ok=true;
	while(ok){
		cout<<"{ ";
		for(int i=1;i<=n;i++){
			cout<<x[i]<<",";
		}
		cout<<" }"<<endl;
		sinh();
	}
	cout<<"{ ";
	for(int i=1;i<=n;i++){
		cout<<x[i]<<",";
	}
	cout<<" }"<<endl;
	return 0;

}