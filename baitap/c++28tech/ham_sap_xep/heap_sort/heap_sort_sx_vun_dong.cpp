// hoạt động bằng cách hình dung ra các phần tử của mảng như 1
// loại cây nhị phân hoàn chỉnh đặc biệt đc gọi là heap - độ phức tạp o(nlogn)


// complete binary tree : định nghĩa cây nhị phân 
// là cây nhị phân trong đó tát cả các cấp (level) được lấp đầy hoàn toàn ngoại trừ có thể là cấp nhất nhất và đc điền từ bên trái
// tất cả các phần tử lá phải nghiêng về bên trái 
// nốt lá cuối cùng có thể k có anh chị e bên phải
// ví dụ : 1        // nốt khớp
//       2   3      // 1 nốt có 2 nốt con
//     4 5  6 7     // 2 là nốt con bên trái 3 là nốt con bên phải
//     nốt k có con là nốt lá ví dụ 4 5 6 7
//     từng hàng này là 1 level


//  minh họa mảng sang cây nhị phân
//  2 3 7 1 4 6
//  0 1 2 3 4 5 
//      2
//   3     7
//  1  4  6
//  các số theo chỉ số mảng 