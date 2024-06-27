/*Nhập 1 ký tự 
char a - cin>>a */

/*Nhập vào 1 chuỗi k có khoảng trắng
char str[n] ; - cin>>str */

/*Nhập 1 chuỗi có khoảng trắng*/
fgets(str, sizeof(str)+1 , stdin); vì sizeof(str) trả về đến \0 nên cần +1 vì \n