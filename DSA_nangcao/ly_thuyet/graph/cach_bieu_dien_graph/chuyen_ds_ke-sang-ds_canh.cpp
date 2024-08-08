#include<bits/stdc++.h>

 int main(){
 	int n;
 	std::vector<std::pair<int,int>> canh;
 	std::cin>>n;
 	std::cin.ignore(); // doc xuong dong
 	for(int i=0;i<n;i++){
 		std::string s; getline(std::cin,s); // đọc từng dòng 1 
 		std::stringstream ss(s);
 		std::string so;
 		while(ss>>so){
 			canh.push_back({i,std::stoi(so)});
 		}
 	}
 	std::sort(begin(canh), end(canh));
 	for(auto x: canh){
 		std::cout<<x.first<<" "<<x.second<<std::endl;
 	}
 }