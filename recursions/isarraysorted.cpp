#include <iostream>
using namespace std;
//is array sorted in asceding order or not
bool isSorted2( int arr[], int size) {
    if (size == 1 || size == 0){
        return true;
    }
    bool smallerOutput = isSorted2(arr+1, size-1);
    if (smallerOutput && arr[0] < arr[1]){
        return true;
    }else{
        return false;
    }
}
bool isSorted(int arr[], int size){
    if(size == 1 || size == 0){
        return true;
    }
    if(arr[0] > arr[1]) {
        return false;
    }
    bool smallerOutput = isSorted2(arr+ 1, size-1);
    return smallerOutput;
    
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int brr[5] = {2,3,6,8,9};
    int crr[1] = {1};
    int b[0] = {};

    cout << isSorted(arr, 5) << endl;
    cout << isSorted(brr, 5) << endl;
    cout << isSorted(crr, 1) << endl;
    cout << isSorted(b, 0) << endl;
    return 0;
}