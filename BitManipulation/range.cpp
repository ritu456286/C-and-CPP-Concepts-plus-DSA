#include <iostream>
using namespace std;

int nXOR(int n){
    if(n % 4 == 0) return n;
    if(n % 4 == 1) return 1;
    if(n % 4 == 2) return n + 1;
    return 0;
}
int rangeXOR(int l, int r){
    int leftXOR = nXOR(l - 1);
    int rightXOR = nXOR(r);
    return rightXOR ^ leftXOR;
}
int main(){
    int l, r;
    cin >> l >> r;
    cout << rangeXOR(l, r) << endl;
    
    return 0;
}