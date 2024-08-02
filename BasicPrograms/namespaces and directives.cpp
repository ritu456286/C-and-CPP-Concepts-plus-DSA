#include <iostream>
#define foo(a) cout << a
using namespace std;



#define STRING "helo"
int main(){
    #ifdef STRING
    //compile this part of the code
    cout << "hello is defined" << endl;
    #endif
    #ifndef STRING
    cout << "not defined" << endl;
    #endif
    #ifndef __cplusplus
    #error A c++ compiler is needed
    #endif

    foo(9); //cout will be implemented here
}

namespace foo{
    void func(){
        cout << "i am foo" << endl;
    }
}
namespace boo{
    void func(){
        cout << "i am boo" << endl;
    }
    
}