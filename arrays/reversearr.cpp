# include <iostream>
using namespace std;
void reverse(int arr[], int size){
    //reversing the array by swapping first and last elements.
    int start = 0;
    int end = size -1;
    while (start < end){ //when starting index becomes greater than end index we have to stop.
        // swap(arr[start], arr[end]); // use swap() method which directly swaps the values;
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void printArray(int array[], int n){ 
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
}

int main() {
    int arr[6] = {1,2,3,4,5,6};
    int brr[5] = {1,2,3,4,5};
    cout << "array before : ";
    printArray(brr,5);
    cout << endl;
    reverse(brr,5);
    cout << "array after : ";
    printArray(brr,5);
    return 0;
}