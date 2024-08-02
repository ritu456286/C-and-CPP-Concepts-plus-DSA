# include <iostream>
using namespace std;
int main() {
    float a,b,exp;
    char op;
    cout << "enter a = ";
    cin >> a;
    cout << "enter b = "; 
    cin >> b;
    cout << "enter operator(+,-,/,*) = ";
    cin >> op;
    switch (op){
        case '+': exp = a+b;
                  cout << exp;
                  break;
        case '-': exp = a-b;
                  cout << exp;
                  break;
        case '/': {exp = a/b;
                  cout << exp;
                  break;}
        case '*': exp = a*b;
                  cout << exp;
                  break;
        default: cout << "please enter valid operation!!!" << endl;   
    }
}