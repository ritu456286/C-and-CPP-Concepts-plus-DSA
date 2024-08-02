#include <iostream>
using namespace std;
#include <cstring>
// void fun(int *a){
//     cout << sizeof(a) << endl; 
//     return;
// }
// void update(int *p){
//     *p = 610 % 255; //*p = 100 which is the  ascii value of d

// }
int add(int a, int b){  //A
    return a + b;
}
int add(int a, int b, int c, int d = 1){   //B
    return a + b + c + d;
}

// float add(int a, int b){     //C (A and C are same names , re-declaration is not allowed)
//     return a + b;
// }
int main(){

    cout << add(1,2,3);
    // char arr[100];
    // cin >> arr;
    // cout << sizeof(arr) << endl;

    // char b[]= "abc";
    // cout << b << endl;
    // char *c = &b[0];
    // char * d= b;
    // cout << c << endl;
    // cout << d << endl;
    // cout << *c << endl;
    // cout << *(c+1) << endl;
    // cout << *(c+2) << endl;
    
    // int arr[4] = {1,2,3,4};
    // cout << sizeof(arr) << endl;
    // fun(arr);
    
    // char ch = 'A';
    // update((int*)&ch);
    // cout << ch;

    // int i ,j ;
    // i = j = 13;
    // cout << i << " " << j << endl;
    // i++;
    // cout << i << " " << j << endl;

    // cout << (int)('N' - 'C') << endl;
    // string str("Hello ninjas");
    // string str = "hello ninjas";
    // getline(cin, str);
    // cin.getline(str, 100);
    // cout << str << endl;
    // str.front() = 'k';
    // str.back() = 'L';
    // cout << str << endl;
    // char arr[30];
    // cin.getline(arr, /30);
    // gets(arr);
    // cout << arr << endl;
    // cout << str << " " << str.size() << endl;
    // str[3] = '\0';
    // cout << str << " " << str.size() << endl;
    // char arr[20] = "Hello Ninjas";
    // arr[2]= '\0';
    // cout << arr << " " << strlen(arr) << endl;
    // string s = "hello";
    // string s2 = str + s;
    // int r = s.compare(str);
    // cout << r << endl;
    // cout << s2 << endl;

}