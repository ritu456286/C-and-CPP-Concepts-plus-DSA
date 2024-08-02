# include <iostream>
#include <vector>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int lengthString(char string[]){
    int i = 0;
    for (; string[i] != '\0'; i++){

    }
    return i;
}
void reverseString1(char *str, int len){
    int end = len - 1;
    int start = 0;
    char temp;
    while(start <= end){
        temp = *(str+start);
        *(str + start) = *(str + end);
        *(str + end) = temp;
        start++;
        end--;
    }
}

string reverse(string s){
    // int i = 0;
    for(int i = 0; i < s.length() / 2; i++){
        swap(s[i], s[s.length() - 1 - i]);
    }
    return s;
}

void reverseString2(char string[], int len){
    int start = 0;
    int end = len - 1;
    while (start < end){
        swap(string[start], string[end]);
        start++;
        end--;
    }
}




int main(){
    string name;
    cout << "Enter your name = ";
    getline(cin, name);
    // cout << "your name is " << name;
    // int length = lengthString(name);
    int l = name.length();
    cout << "length of your name is " << l << endl;
    // cout << name[]
    // reverseString2(name, length);

    // cout << "reverse string is = " << reverse(name);

    // string s1 = "";
    // s1 = s1 + 'a';
    // s1 += 'b';
    // s1 += "hello";
    // cout << s1;

   
    return 0;


}
