// duyệt bằng 
#include<iostream>
#include<deque>
using namespace std;

int main(){
	deque<int> number{1,2,3,4,5,6};
	/*Duyệt = vòng lặp dựa trên phạm vi 

	for(auto x: number)
		cout<<x<<" ";
	*/



	/*duyệt = vòng lặp và index 

	for(int i=0; i<number.size(); i++)
		cout<<number[i]<<" ";
	*/

	
	/*duyệt = iterator*/
	for(auto itr= number.begin(); itr!= number.end(); itr++)
		cout<<*itr<<" ";
	return 0;
}