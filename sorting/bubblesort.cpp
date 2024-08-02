#include <iostream>
using namespace std;
void sortArr(int arr[], int size){
    for (int i = 0; i < size; i++){
        for(int j= 0; j < size; j++){
            if (arr[i]< arr[j]){
                swap(arr[i], arr[j]);
            }
        }
        
    }
}
void printarr(int arr[], int size){
    for(int i =0; i < size; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[6] = {10,1,7,9,14,5};
    sortArr(arr, 6);
    printarr(arr, 6);
    return 0;
}