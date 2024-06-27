#include<iostream>
using namesapce std;
string split(string str, string delimiter){
	size_t pos = 0;
	string token;
	while((pos = str.find(delimiter)) != string::npos){
		token =str.substr(0,pos);
		cout<<token<<endl;
		str.erase(0,pos+delimiter.length());
	}
	return str;
}


int main(){
	//tách string = kí tự ' '
	cout<<split("Hello new world!", " ")<<endl;

	//tách str = dấu \t
	cout<<split("Tom\tand\tjerry","\t")<<endl;
	return 0;
}
