# include <iostream>
# include <math.h>
using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int i = 0;
//     bool ans = false;
//     while (pow(2,i) <= n){
//         if (n == pow(2,i)) {
//             ans = true;
//             // cout << "inside if";
//             break;
//         }
//         i++;
//         // cout << i;
//     }  
//     cout << ans; 

// }

// METHOD 2 : if number of set bits == 1 then number can be expressed as power of 2
// int main() {
//     int n;
//     cout << "Enter number = ";
//     cin >> n;
//     int count = 0;
//     while (n != 0){
//         if (n & 1) {
//             count += 1;
//         }
//         n >>= 1;
//     }
//     if (count == 1 ){
//         cout << "Number can be expressed as power of 2." << endl;
//     }
//     else{
//         cout << "Number can't be expressed as power of 2." << endl;
//     }
// }