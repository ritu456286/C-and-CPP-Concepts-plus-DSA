// #include <iostream>
// using namespace std;
// void inc(int &n){
//     n++;
// }

// //some bad practices: 
// // 1 returning reference to a local variable
// int & f1(int n){
//     int a = n;
//     return a;
// }
// //2 returning address of local variable
// int * f2(int n){
//     n= 10;
//     return &n;
// }

// int main(){
//     int i = 10;
//     // inc(i);
//     // cout << i << endl;
//     // int &j = i;
//     // // int &j; //error : decalaration of reference variable j needs to be intialised because it is going to use seome other variable's memory.
//     // // j = i; 
//     // int k = 50;
//     // j = 50;
//     // cout << i << " "  << j << endl;
//     // i++;
//     // cout << i << " "  << j << endl;

//     //some bad paractices
//     int &k1 = f1(i); // warning reference to local variable returned

//     //some bad practices:
//     int *p = f2(i); // warning address of  local variable returned



//     return 0;
// }

#include <iostream>
using namespace std;

void func(int i, int& j, int p){
    i++;
    j++;
    p++;
}

int main(){
    int i = 10;
    int j = 6;
    int &p = i;
    func(i, j, p);
    cout << i << " " << j << " " << p;
}