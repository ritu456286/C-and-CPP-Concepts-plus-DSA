# include <iostream>
# include <math.h>
using namespace std;
/*The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.*/
//METHOD 1
// int main() {
//     int n;
//     cin >> n;
//     int bin_form = 0;
//     int i = 0;
//     while (n != 0){
//         int bit = n & 1;
//         if (!bit){
//             bin_form = 1*pow(10,i) + bin_form;
//         }
//         i++;
//         n = n >> 1;
//     }
//     cout << bin_form << endl;
//     int ans = 0;
//     int j = 0;
//     while (bin_form != 0){
//         int dig = bin_form % 10;
//         ans = pow(2,j)*dig + ans;
//         j++;
//         bin_form /= 10;

//     }
//     cout << ans;  
// }

//METHOD 2 (best)
// int main() {
//     int n;
//     cin >> n;
//     int m = n;
//     int mask = 0;
//     if (n == 0) {
//         cout << 1;
//     }
//     else{
//         while (n != 0){
//         mask = (mask << 1) | 1;
//         n = n >> 1;}
//         int ans = (~m) & mask;
//         cout << ans;
//     }
// }