
// sort() - có thể dùng vs mảng , vector , string
// sort(a,a+n) hay sort(v.begin(),v.end()) vs vector : sắp xếp tăng dần 
// sort(a,a+n, greater<int>()) hay sort(v.begin(),v.end(),greater<int>()) vs vector : sắp xếp giảm dần 
//sort(v.begin()+x,v.begin()+y) vs vector : sắp xếp trong đoạn [x,y-1]

// stable_sort() tồn tại trong bubble ,insertion sort , merge sort 


// ví dụ sắp xếp các phần tử tăng dần theo trị tuyệt đối 
// 1 -1 2 1 5 -2 5
// 1 -1 1 2 -2 5 5
