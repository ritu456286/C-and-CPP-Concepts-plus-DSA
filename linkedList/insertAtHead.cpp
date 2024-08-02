#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int findFirstUnique(int arr[], int size){
    sort(arr, arr+size);
    for(int i = 0; i < size; i++){
        if (i == 0){
            if(arr[i] != arr[i+1]){
                return arr[i];
            }
        } else if (i == size - 1) {
            if (arr[i] != arr[i - 1]) {
                return arr[i];
            }
        } else {
            if (arr[i] != arr[i+1] && arr[i] != arr[i-1]){
                return arr[i];
            }
        }
    }
    return -1;
}
// int findFirstUnique(int arr[], int size){
//     sort(arr, arr+size);
//     // printArray(arr, size);
//     for(int i = 0; i < size; i++){
//         if (i ==0){
//             // cout << arr[i] << endl;
//             // cout << arr[i+1] << endl;
//             if(arr[i] != arr[i+1]){
//                 return arr[i];
//             }else{
//                 continue;
//             }
            
//         }else if(i == size - 1 && arr[i] != arr[i-1]){
//             return arr[i];
//         }else if(arr[i] != arr[i+1] || arr[i-1] != arr[i]){
//             return arr[i];
//         }
//     }
//     return -1;
// }
int main(){
    int size = 6;
    int arr[size] = {2, 54, 7, 2, 6 ,5};
    int unique = findFirstUnique(arr, size);
    cout << unique << endl;
    return 0;
}
