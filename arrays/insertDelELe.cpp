#include <iostream>
using namespace std;
#define MAX_SIZE 4
int insertEle(int arr[], int size, int ele, int index){
    if(size == MAX_SIZE){
        cout<< "No space to insert elements in the array!" << endl;
        return size;
    }
    int j = size - 1;
    while(j >= index){
        //shift the elements right to j
        arr[j+1] = arr[j];

        j--;
    }
    arr[index] = ele;
    return ++size;
    
}

int deleteELe(int arr[], int size, int index){
    int i = index;
    if(index >= size){
        cout << "Index provided is more than the size of array!"<< endl;
        return size;
    }
    while(i <= size - 2){
        arr[i] = arr[i+1];
        i++;
    }
    return --size;


}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i ++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int * inputArray(int size){
    int *arr = new int[MAX_SIZE];
    for(int i = 0; i < size; i++){
        cout << "Element: ";
        cin >> arr[i];
    }
    return arr;
}
int main(){
    int size_of_array, index, element;
    cout << "Enter size of array: ";
    cin >> size_of_array;

    // int array[MAX_SIZE];
    // for(int i = 0; i < size_of_array; i++){
    //     cout << "Element: ";
    //     cin >> array[i];
    // }

    int * array = inputArray(size_of_array);
    printArray(array, size_of_array);

    

    cout << "Enter index where to delete the element";
    cin >> index;
    // cout << size_of_array << endl;


    size_of_array = deleteELe(array, size_of_array, index);

    printArray(array, size_of_array);

    return 0;
}