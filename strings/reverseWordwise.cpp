#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char arr[100];
    char newarr[100] ;
    cin.getline(arr, 100);
    int length = strlen(arr);
    int k = 0;
    for(int i=length; i >=0; i--){
        if (arr[i] == ' ' ){
            int j = i+1;
            while(arr[j] != ' ' && arr[j] != '\0'){
                
                newarr[k++] = arr[j++];
            }
            newarr[k++] = ' ';
        }

    }
    for(int i = 0; newarr[i] != '\0'; i++){
        cout << newarr[i];
    }

    return 0;
}