# include <iostream>
using namespace std;
// to print all unique elements in an array: Taking  2 loops, take elements from left and 
//check for their copies through right, if any duplicate is found don't print that element
// and move on to the next right element. continue till last element is accessed.

void printUnique(int arr[], int size){
   for (int i = 0; i < size; i++){
    int count = 0;
    for (int j = i+1; j < size; j++){
        if(arr[i] == arr[j]){
            count++;
            break;
        }
    }
    if (count == 0){
        cout << arr[i] << endl;}
    }
}
//2nd approach by checking duplicacy via left direction elements
void printUnique_2(int arr[], int size){
//The outer loop picks an element one by one starting from the leftmost element. The inner
// loop checks if the element is present on left side of it. If present, then ignores the 
// element, else prints the element
    for (int i = 0; i < size; i++){
        int j = i;
        for (; j >= 0; j--){
            if (arr[j] == arr[i] && i != j){
                break;
            }
        }
        if (j == -1){
            cout << arr[i] << endl;
        }
    }
}


int main(){
    //input array
    int n;
    cout << "enter size of array = ";
    cin >> n;
    int arr[n];
    cout << "\nEnter elements of array" << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "printing unique elements _1" << endl;
    printUnique(arr, n);
    cout << "printing unique elements _2" << endl;
    printUnique_2(arr, n);
    return 0;
}