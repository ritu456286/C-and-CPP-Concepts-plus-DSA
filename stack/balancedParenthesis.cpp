#include <iostream>
using namespace std;
#include <stack>
int main(){
    char arr[100];
    gets(arr);
    int i = 0;
    stack<char> myStack;
    while(arr[i] != '\0'){
        if(arr[i] == '{' ||arr[i] == '[' || arr[i] == '('){
            myStack.push(arr[i]);
        }
        else if(arr[i] == '}' ||arr[i] == ']' || arr[i] == ')'){
            if(myStack.top() != arr[i]){
                break;
            }else{
                myStack.pop();
            }
        }
        i++;
    }
    if(myStack.empty() == 1){
        cout << "True";
    }else{
        cout << "False";
    }
    return 0;
}