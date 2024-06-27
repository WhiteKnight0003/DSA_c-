#include<bits/stdc++.h>
using namespace std;

class Cuahang{
private:
	int N,S,M;
public:
	Cuahang(){
		N=S=M=0;
	}
	friend istream& operator >> (istream& in, Cuahang &a){
		in>>a.N>>a.S>>a.M;
		return in;
	}
	int getN(){
		return N;
	}
	int getM(){
		return M;
	}
	int getS(){
		return S;
	}
};


int main(){
	int t; cin>>t;
	while(t--){
		Cuahang a;
		cin>>a;
		int cn = a.getS()/7; /// tim so ngay cn
		int songay = a.getS()-cn;
		if(a.getN()*songay >= a.getM()*a.getS()){
			if((a.getM()*a.getS()) % a.getN()==0){
				cout<<(a.getM()*a.getS()) / a.getN()<<endl;
			}
			else {
				cout<<(a.getM()*a.getS()) / a.getN() +1<<endl;
			}
		}
		else cout<<"-1"<<endl;
	}
}