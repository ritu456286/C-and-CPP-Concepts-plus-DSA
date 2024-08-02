# include <iostream>
using namespace std;
// difference between sum and product of digits of given integer.
// int main(){
//     int n;
//     cin >> n;
//     int sum = 0;
//     int prod = 1;
//     int r;
//     while (n!=0){
        
//         r = n%10;
//         sum += r;
//         prod *= r;
//         n = n/10;
//     }    
//     int diff = prod - sum;
//     cout << diff;

// }

// number of "1" bits in the given binary representation

// int main() {
//     int n;
//     cin >> n;
//     int count = 0;
//     while (n!=0){
//         int r = n%10;
//         if (r==1) {
//             count +=1;
//         }
//         n = n/10;
//     }
//     cout << count;
// }

// number of set bits("1") in given integer's binary form.
int main () {
    int n ;
    cin >> n;
    int count = 0;
    while (n!=0) {
        if (n & 1) {
            count ++;
        }
        n = n >> 1;
    }
    cout << count;
}   
