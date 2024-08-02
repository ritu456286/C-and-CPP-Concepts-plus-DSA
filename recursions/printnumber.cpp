#include <iostream>
using namespace std;
int printNumbers(int num){
    if (num == 1){
        
        return 1;
        cout << num;
    }
    
    return printNumbers(num-1);
    cout << num << " ";
}
int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;
    printNumbers(n);
    return 0;
}