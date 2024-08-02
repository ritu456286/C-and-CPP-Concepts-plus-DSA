#include <iostream>
using namespace std;
// void sortArr(int arr[], int size){
//     //using recursion
//     if(size == 1 || size == 0){
//         return;
//     }
//     int min = arr[0], pos = 0;
    
//     for(int i = 0; i < size; i++){
//         if(arr[i] < min){
//             min = arr[i];
//             pos = i;
//         }
//     }
//     swap(arr[0], arr[pos]);
//     sortArr(arr+1, size -1 );
    
// }

void sortArr2(int arr[], int size){
    //using iteration
    for(int i = 0; i < size -1; i++){
        int min = arr[i], pos = i;
        for (int j = i; j < size; j++){
            if(arr[j] < min){
                min = arr[j];
                pos = j;
            }
        }
        swap(arr[i], arr[pos]);
    }
}

void printArr(int arr[], int size){
    //printing array
    for (int i =0; i < size ; i++){
        cout << arr[i] << " ";
    }

}
int main(){

    int arr[7] = {7,8,1,2,5,9,6};
    printArr(arr, 7);
    cout << endl;

    // sortArr2(arr, 7);
    // printArr(arr, 7);
    // cout << endl;

    sortArr2(arr, 7);
    printArr(arr, 7);
    cout << endl;

    return 0;
}