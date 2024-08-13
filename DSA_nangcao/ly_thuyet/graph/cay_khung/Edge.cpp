
#include<bits/stdc++.h>
using namespace std;

class Edge{
private:
	int s,t,w;
public:
	Edge(){};
	Edge(int s, int t, int w){
		this->s = s;
		this->t = t;
		this->w = w;
	}

	void setS(int s){
		this->s = s;
	}
	int getS(){
		return s;
	}

	void setT(int t){
		this->t = t;
	}
	int getT(){
		return t;
	}

	void setW(int w){
		this->w = w;
	}
	int getW(){
		return w;
	}
};
