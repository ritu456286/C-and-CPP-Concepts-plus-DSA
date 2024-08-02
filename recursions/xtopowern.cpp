#include <iostream>
using namespace std;
int xpowern(int &x, int n){ //can use reference to x to save space
    if (n == 0){
        return 1;
    }
    return x * xpowern(x, n-1);
}
int main(){
    int num, power;
    cout << "Enter number and power : " ;
    cin >> num >> power;
    cout << num << "^" << power << "= " << xpowern(num, power);
    return 0;
}