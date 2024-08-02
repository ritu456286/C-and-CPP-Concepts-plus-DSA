#include <iostream>
using namespace std;
int * removeEven(int *&Arr, int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(Arr[i] % 2 == 0){
            count ++;
        }
    }
    int * brr = new int[count];
    int j = 0;
    for(int i = 0; i < size; i++){
        if(Arr[i] % 2 != 0){
            brr[j] = Arr[i];
            j++;
        }

    }
    return brr;
}

int main(){
     int * arr;
     arr = new int[20];
     for(int i=1 ;i<= 20; ++i){
        arr[i] = i;
    }
    arr = removeEven(arr, 20);
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}