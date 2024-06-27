// (1^n + 2^n + 3^n + 4^n) mod 5
/* mũ  1  2  3  4 
   số
    1  1  1  1  1   
    2  2  4  8  6 
    3  3  9  7  1 
    4  4  6  4  6 
  sum  10 20 20 14
  mod5 0  0  0   4
    t thấy nó lặp lại với chu kì là 4
   n%4 1 2 3 0 1

   tức khi 2 số cuối của số đã cho % 4 = 1 2 3 0
   kq = 0 0 0 4
  */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	char c[100005];
	cin>>c;
	int r;
	if(strlen(c)==1)
		r=(c[0]-'0')%4;
	else {
		r = ((c[strlen(c)-2]-'0')*10+ c[strlen(c)-1]); // lấy 2 số cuối
		r%=4;
	}

	if(r==0)
		cout<<"4";
	else cout<<"0";
	return 0;
}