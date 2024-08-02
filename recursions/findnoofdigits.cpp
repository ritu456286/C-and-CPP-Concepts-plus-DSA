#include <iostream>
using namespace std;
int numberOfDigits(int num){
    // static int counter = 0;
    if( num == 0){
        // return counter;
        return 1;

    }
    // counter++;
    // return numberOfDigits(num/10);
    int smallOutput = numberOfDigits(num/10);
    return 1 + smallOutput;
    
}
int main(){
    // int n;
    // cout << "Enter number : ";
    // cin >> n;

    cout << "number of digits = "  << numberOfDigits(456)  << endl;
    return 0;
}