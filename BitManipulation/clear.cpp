#include <iostream>
using namespace std;

int clearLastSetBit(int n){
    //
    n = n & (n - 1);
    return n;
}
int main(){
    int n;
    cin >> n;
    cout << clearLastSetBit(n) << endl;

    return 0;
}