#include <iostream>
using namespace std;
void sortArr(int arr[], int size){
    for(int i = 1; i < size; i++){
        int temp = arr[i];
        int j = i-1;
        for(j= i-1; j >=0; j--){
            // if(arr[i] > arr[j]){
            //     int temp = arr[i];
            //     for(int k = j; k < i; k++ ){
            //         arr[k+1] = arr[k];
            //     }
            //     arr[j+1] = temp;
            if(temp < arr[j]){
                
                arr[j+1] = arr[j]; //here we are not swapping but shifting every smaller jth element in sorted array to j+1th pos
            }else{
                break;
            }
            
        }
        arr[j+1] = temp;

    }
}
void sortArr1(int arr[], int size){
    for(int i = 1; i < size; i++){
        int temp = arr[i];
        int j = i-1;
        for(j= i-1; j >=0; j--){
            // if(arr[i] > arr[j]){
            //     int temp = arr[i];
            //     for(int k = j; k < i; k++ ){
            //         arr[k+1] = arr[k];
            //     }
            //     arr[j+1] = temp;
            if(temp < arr[j]){
                
                arr[j+1] = arr[j]; //here we are swapping my arr[i] with every smaller element in sorted array all the way to the start
                arr[j] = temp;
            }else{
                break;
            }
            
        }
        // arr[j+1] = temp; //here we don't need this statement, as we've done swapping

    }
}
void printarr(int arr[], int size){
    for(int i =0; i < size; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[6] = {10,1,7,9,14,5};
    sortArr1(arr, 6);
    printarr(arr, 6);
    return 0;
}