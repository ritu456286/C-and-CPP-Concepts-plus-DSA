#include <iostream>
#define SQUARE(x) x*x
using namespace std;
int main(){
    int x = 36/SQUARE(6);
    int y= 36/36;
    cout << x << " " << y << endl;
    return 0;
}