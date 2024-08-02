#include <iostream>
using namespace std;

bool isEven(int n){
    return !(n >> 1);
}

bool isEven1(int n){
    return !(n & 1);
}

bool isEven2(int n){
    return n % 2 == 0;
}

int main(){
    int n;
    cin >> n;
    string ans =  isEven(n) ? "n is even" : "n is odd";
    cout << ans;

    return 0;
}