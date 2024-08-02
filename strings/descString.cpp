#include <iostream>
#include <vector>
#include <bits\stdc++.h>
using namespace std;
string reverse1(string s){
    vector<char> text;
    string reversed = "";
    for(char x : s){
        text.push_back(x);
    }
    sort(text.begin(), text.end(), greater<char>());
    for(char x : text){
        reversed += x;
    }
    return reversed;
}
int main(){
    
    return 0;
}
