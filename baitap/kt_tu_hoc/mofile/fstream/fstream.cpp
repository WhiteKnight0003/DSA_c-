//Chúng ta có 2 phương pháp đọc file trong C++ bằng cách sử dụng header file fstream như sau:
//Đọc file trong C++ bằng toán tử >>
//Đọc file trong C++ bằng hàm getline

// Ứng dụng các phương pháp này, chúng ta cũng có thể:

//Đọc từng ký tự trong file bằng C++
//Đọc từng dòng trong file bằng C++
//Đọc từng từ trong fbile bằng C++
//Đọc file CSV trong C++

#include<bits/stdc++.h>
using namespace std;

int main(){ 
	ofstream ofs("text.txt"); // mở file = ofstream và ghi vào file
	ofs<<"asssa\n assmd";
	ofs.close();
	ifstream ifs("text.txt"); // mở file = ifstream và đọc file
	if(!ifs){
		cout<<"k mở đc file"<<endl;
		return 1;
	}

	string chr; 
	while(ifs >> chr){ // đọc file = toán tử >>
		cout<<chr<<endl;
	}

	ifs.close();
	return 0;
}