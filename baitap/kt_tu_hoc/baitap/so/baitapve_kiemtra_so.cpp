#include<iostream>
#include<cmath>
using namespace std;
int n;

void ktsochan_le(int n){
	if(n%2==0) cout<<n<<" la so chan"<<endl;
	else cout<<n<<" la so le"<<endl;
}

int snt(int n){
	int r=1;
	if(n<2) return r=0;
	int i=2;
	while(i<n){
		if(n%i==0){
			r=0;
			break;
		}
		i++;
	} return r;
}

void ktsnt(int n){
	if(snt(n)==1) cout<< n<<" la so nguyen to"<<endl;
	if(snt(n)==0) cout<< n<<" k la so nguyen to"<<endl;
}

void soam_duong(int n){
	if(n>0) cout<<n<<" la so duong"<<endl;
	if(n<0) cout<<n<<" la so am"<<endl;
}

void ktsochinhphuong(int n){
	float r=sqrt(n);
	if(r-(int)(r)==0) cout<<n<<" la so chinh phuong"<<endl;
	else if(r-(int)(r)!=0) cout<<n<<" k la so chinh phuong"<<endl;
}
void ktsohoanhoa(int n){
	int s=0;
	for(int i=1;i<n;i++){
		if(n%i==0)
			s=s+i;
	}
	if(n==s) cout<<n<<" la so hoan hao"<<endl;
	else cout<<n<<" k la so hoan hao"<<endl;
}

int main(){
	cout<<"Nhap vao n : ";
	cin>>n;
	ktsochan_le(n);
	ktsnt(n);
	soam_duong(n);
	ktsochinhphuong(n);
	ktsohoanhoa(n);
	return 0;
}