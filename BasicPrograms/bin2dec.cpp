# include <iostream> 
# include <math.h>
using namespace std;
// int main () {
//     int bin;
//     cout << " Enter binary number : ";
//     cin >> bin;
//     int i = 0;
//     int temp=1;
//     int dec = 0;
//     while (bin != 0){
//         int r = bin%10;
//         int dig = r*temp;
//         dec = dec + dig;
//         temp=temp*2;
//         bin=bin/10;
//     }
//     cout << dec; 

// }
//METHOD 2
int main(){
    int bin;
    cout << "Enter binary number = ";
    cin >> bin;
    int dec = 0;
    int i = 1;
    while (bin != 0){
        int dig = bin % 10;
        if (dig == 1){
            dec += pow (2,i);
        }
        i++;
        bin = bin / 10;
    }
    cout << "Decimal number = " << dec;
}

