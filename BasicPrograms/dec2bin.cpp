# include <iostream>
# include <math.h>
using namespace std;
// not for negative decimal numbers.
// int main(){
//     int dec;
//     cout << " enter decimal number: ";
//     cin >> dec;
//     int rev = 0;
//     int temp = 1;
//     while (dec!=0){
//         int dig = dec%2;
//         rev = dig*temp + rev;
//         temp = temp*10;
//         dec = dec/2;
//     }
//     cout << " binary form = " << rev;
// }

//METHOD 2 (MORE EFFICIENT)
int main () {
    int dec;
    cout << "enter decimal number= ";
    cin >> dec;
    int rev = 0;
    int temp = 1;
    while (dec!=0){
        int dig = dec & 1;
        rev = dig*temp + rev;
        // or use : rev = (dig* pow( 10,i)) + rev;
        // i++;
        temp = temp*10;
        dec = dec >> 1;
        cout << "0";
    }
    cout << "binary form = " << rev;
}
