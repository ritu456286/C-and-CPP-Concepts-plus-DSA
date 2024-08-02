# include <iostream>
using namespace std;
// to calculate total number of set bits ("1") in given two integers( a and b).
int setbits(int num){
    int count = 0;
    while (num != 0){
        if(num & 1){
            count++;
        }
        num >>=1;
    }
    return count;
}
int main(){
    int a,b;
    cout << "Enter a and b = " << endl;
    cin >> a >> b;
    int sum = setbits(a) + setbits(b);
    cout << "Total number of set bits = " << sum;
}