#include <iostream>
using namespace std;
#include "stackUsingLL.h"
int main(){
    StackUsingLL<int> p;
    p.push(10);
    p.push(20);
    p.push(30);
    p.push(40);
    p.push(50);
    cout << p.pop() << endl;
    cout << p.pop() << endl;
    cout << p.pop() << endl;
    cout << p.pop() << endl;
    cout << p.pop() << endl;
    cout << p.pop() << endl;
    return 0;
}