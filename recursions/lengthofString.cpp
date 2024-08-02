#include <iostream>
using namespace std;
int length(char arr[]){
    if(arr[0] == '\0'){
        return 0;
    }
    int smallerLength = length(arr +1 );
    return 1 + smallerLength;
}
int main(){
    char arr[20];
    // string name;
    cout << "Enter string : "; 
    cin.getline(arr, 20);
    // getline(cin, name);
    // cout << *(arr+1) << endl;
    // cout << *(name + 1) << endl;
    cout << "Length of string : " << length(arr) << endl;
    // cout << "Length of string : " << length(name) << endl;

    return 0;
}