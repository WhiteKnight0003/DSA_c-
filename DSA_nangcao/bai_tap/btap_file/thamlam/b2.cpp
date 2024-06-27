#include<bits/stdc++.h>
using namespace std;

#define ll long long 
int main(){
	int t; cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int maxA=0,maxB=0;
		int minA=0,minB=0;
		stack<int> A;
		stack<int> B;

		/*
		
		*/
		while(a){
			int x = a%10;
			A.push(x);
			a/=10;
		}
		/*
		
		*/
		while(b){
			int x = b%10;
			B.push(x);
			b/=10;
		}
		while(A.size()){
			maxA*=10;
			minA*=10;
			if(A.top()==6){
				minA+=5;
				maxA+=A.top();
			}
			else if(A.top()==5){
				minA+=A.top();
				maxA+=6;
			}
			else {
				minA+=A.top();
				maxA+=A.top();
			}
			A.pop();
		}
		while(B.size()){
			maxB*=10;
			minB*=10;
			if(B.top()==6){
				minB+=5;
				maxB+=B.top();
			}
			else if(B.top()==5){
				minB+=B.top();
				maxB+=6;
			}
			else {
				minB+=B.top();
				maxB+=B.top();
			}
			B.pop();
		}
		cout<<minA+minB<<" "<<maxA+maxB<<endl;
	}
	return 0;
}