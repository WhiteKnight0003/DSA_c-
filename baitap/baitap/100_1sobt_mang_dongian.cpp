#include<bits/stdc++.h>
using namespace std;

/* bài 1 : lấy số lớn nhất và nhỏ nhất mảng
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	cout<<a[0]<<" "<<a[n-1]<<endl;
} 


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	vector<int> a(n);
	for(auto &x: a) // nhập từng phần tử 
		cin>>x;
	sort(a.begin(),a.end()); // sắp xếp
	cout<<a.front()<<" "<<a.back()<<endl; // lấy gt đầu cuối 
	return 0;
}*/

/* bài 2 đếm số lượng số lẻ chẵn 
int main(){
	int n; cin>>n;
	int a[n];
	int le=0;
	for(int i=0;i<n;i++){
		cin>>a[i];	
		if(abs(a[i]) %2 ==1)
			++le;
	}
	cout<<n-le<<" "<<le<<endl;
	return 0;
} 

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n; cin>>n;
	vector<int> a(n);
	
	int le=0;
	for(auto &x : a){
		cin>>x;
		if(x%2== 1)
			++le;
	}
	cout<<n-le<<" "<<le;
	return 0;
}
*/


/*bài 3 : dem so luong phan tu la snt
int prime(int n){
	if(n<2) 
		return 0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0){
			return 0;
			break;
		}
	return 1;
}

int main(){
	int n; cin>>n;
	int a[n];
	int snt=0;
	 for(int i=0;i<n;i++){
	 		cin>>a[i];
    	      if(prime(a[i]))
                 cout<<a[i]<<" ";
	 }
    return 0;
}
*/


/* bài 4 in ra vị trí nhỏ nhất
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int index=0;
	int min=a[0];
	for(int i=1;i<n;i++)
		if(min>a[i]){
			min=a[i];
			index=i;
		}
	cout<<index;
	return 0;
}*/

/* in ra vị trí nhỏ thứ 2 và vị trí nhỏ thứ nhất 

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	int a[n];
	int max1=-1e9;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>max1)
			max1=a[i];
	}
	sort(a,a+n);
	int max2=-1e9;
	for(int i=n-1;i>=0;i--)
		if(a[i]<max1){
			max2=a[i];
			break;
		}
	for(int i=0;i<n;i++)
		if(a[i]<max2)
			cout<<a[i]<<" ";


	hoặc
	for(int i=0;i<n;i++)
	if(a[i]>max1){
	max2= max1;
	max1=a[i];
	} 
	else if(a[i]>max2)
	       max2= a[i];

	for(int i=0;i<n;i++)
	   if(a[i]<max2)
	     cout<<a[i]<<" ";
	return 0;
	*/

// 1 số đẹp nếu có cả 1 và 9
int check(int n){
	int c1=0, c9=0;
	int num=n;
	while(n){
		int r=n%10;
		if(r==1) c1=1;
		if(r==9) c9 =1;
		n/=10;
	}
	if(c1 && c9) 
		return num;
	else return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cout<<check(a[i])<<endl;

}