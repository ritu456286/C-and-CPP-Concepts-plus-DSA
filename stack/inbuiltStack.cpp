#include <iostream>
using namespace std;
// #include <stack>
#include "stackUsingArray.h" //header files cannot have main function, they are just meant to be #included in other cpp files
#include <stack>  //in-built header files included in angular brackets


int main(){
    // StackUsingArray<int> p;
    // p.push(10);
    // cout << p.top() << endl;

    stack<int> s1;
    stack<int> s2;
    stack<char>s3;
    s2.push(1);
    s2.push(2);
    s2.push(3);
    s2.push(4);
    s2.push(5);


    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    

    s3.push('a');
    s3.push('b');
    s3.push('c');
    s3.push('d');
    s3.push('e');
    s3.push('f');
    s3.push('g');


    // s1.emplace(3232);
    cout << s1.top() << endl;
    s1.pop();
    // cout << s1.top() << endl; 
    // cout << s1.size() << endl;
    // cout << s1.empty() << endl;
    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.pop();
    // cout << s1.top() << endl;
    // cout << s1.empty() << endl;

    s1.swap(s2);
    for(int i = 1; i <= 5; i++){
        cout << s1.top() << endl;
        s1.pop();
    }
    // s1.swap(s3); this gives error because s1 is of integer type and s3 is of character type
    for(int i = 1; i <= 7; i++){
        cout << s1.top() << endl;
        s1.pop();
    }
    return 0;
}