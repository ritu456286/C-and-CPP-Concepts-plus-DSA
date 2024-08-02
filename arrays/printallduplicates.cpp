# include <iostream>
using namespace std;
void printDuplicates(int arr[], int size){
    for (int i = 0; i < size; i++){
        for (int j = i+1; j < size; j++){
            if (arr[i] == arr[j]){
                cout << arr[j];
                break;
            }
        }
    }
}
int main() {
    //input array
    int n;
    cout << "Enter the size of array = ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array." << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    printDuplicates(arr, n);

}