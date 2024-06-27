// là 1 số có chứa ít nhất 1 chữ số 6 và tổng các chữ số của nó có tận cùng =8
#include<bits/stdc++.h>
using namespace std;

int symmetry(int n){
	int res=0;
	int temp=n;
	while(n){
		res= res*10 + n%10;
		n/=10;
	}

	return res== temp;
}
int analysis(int n){
	string str = to_string(n);
	int cnt=0;
	for(int i=0; i< str.size(); i++)
		if(str[i] =='6')
			cnt++;
	if(cnt>=1)
		return n;
	return 0;
}

int summ(int n){
	int temp=n;
	int sum =0;
	while(n){
		sum+=n%10;
		n/=10;
	}

	if(sum%10 ==8)
		return 1;
	return 0;
}

int main(){
	int a, b;
	cin>>a>>b;
	for(int i=a; i<=b;i++)
		if(symmetry(i) && analysis(i) && summ(i) )
			cout<<i<<" ";
		cout<<endl;
	return 0;
}