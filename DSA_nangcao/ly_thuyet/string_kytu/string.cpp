#include<bits/stdc++.h>
using namespace std;

int main(){
	/*
	string s = "fdfsdfsd sdgfdsg";
	string ss; cin>>ss; // nhap 1 chuoi k co dau cach va ta nen cin.ignore() de no tranh bi sai
	string s1; getline(cin,s1); // nhap 1 chuoi co dau cach
	*/

	 string s = "ngon ngu lap trinh java";
    stringstream ss(s); // ss(s," ")
    string word;
    while(ss>>word){
    	cout<<word<<endl;
	}
    /* stringstream - giup doc ra tung  tu
   
    }
*/
}

// ham size() or length() - tra ve do dai xau
// truy cap vao tu ky tu cua string (no la 1 mang ky tu)
// noi 2 string bang toan tu + 
// so sanh truc tiep bang toan tu == , > , < , <= , >= , != 
// sâu được so sánh theo thứ tự từ điển và so sánh theo từng ký tự

