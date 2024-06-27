// số strong là số có tổng giai thừa tất cả các chữ số = chính nó
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
	int res=1;
	for(int i=1;i<=n;i++)
		res*=i;
	return res;
}

int summ(int n){
	int tmp = n;
	int sum =0; 
	while(n){
		sum+=factorial(n%10);
		n/=10;
	}
    return sum == tmp;
}
int main(){
	int a,b;
	cin>>a>>b;
	int check =0;
	for(int i=a; i<= b; i++)
		if(summ(i)){
			check =1;
			cout<<i<<" ";
		}
	if(check==0)
		cout<<"0";
	return 0;
}