//ifstream là một class cung cấp chức năng của một luồng file đầu vào
//Nếu mở file thành công bằng ifstream thì ifs sẽ được trả về. Tuy nhiên nếu mở file thất bại thì ifs sẽ không tồn tại.
#include<bits/stdc++.h>
using namespace std;

int main(){
	string filename("same.txt");
	vector<string> lines;  // khai báo vector lưu các dòng đoc được 
	string line;

	ifstream input_file(filename); //mở file bằng ifs
	if(!input_file.is_open()){
		cerr<<"k thể mở file - "<<filename<<"'"<<endl;
		return EXIT_FAILURE;
	}
	// đọc từng dòng
	while(getline(input_file,line)){
		lines.push_back(line); // lưu vào vector
	}
	for(const auto &i : lines) // xuất ra từng dòng
		cout<<i<<endl;

	input_file.close(); // đóng file
	return 0;
}