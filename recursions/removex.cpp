#include <iostream>
using namespace std;

int length(char arr[]){
    if(arr[0] == '\0'){
        return 0;
    }
    int smallerLength = length(arr +1 );
    return 1 + smallerLength;
}


void removex(char arr[]){
    if( arr[0] == '\0'){
        return;
    }
    if (arr[0] != 'x' && arr[0] != 'X'){
        removex(arr+1);
    }else{
        int i = 1;
        for(; arr[i] != '\0'; i++){
            arr[i-1] = arr[i];
        }
        arr[i - 1] = arr[i];
        removex(arr); 
    }

}
int main(){
    char arr[20];
    cin >> arr; 
    cout << length(arr) << endl;
    cout << "Original string : " << arr << endl;
    removex(arr);
    cout << length(arr) << endl;
    cout << "Modified string : " << arr << endl;
    
    return 0;
}