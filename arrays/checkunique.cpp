# include <iostream>
using namespace std; 
void checkunique(int arr[], int size, int ele){
    int count = 0;
    for (int i = 0; i < size; i++){
        if (arr[i] == ele){
            count ++;
        }
    }
    if (count == 1){
        cout << ele << " is found to be unique in array." << endl;
    }else if (count == 0){
        cout << ele << " is not found in array." << endl;
    }else{
        cout << ele << " is not unique in array." << endl;
    }
    
}
int main() {
    // int arr[6] = {1,2,3,4,4,2};
    int n,i;
    cout << "\nEnter the number of elements(size) : ";
    cin >> n;
    int arr[n];
    cout << "\nInput the array elements : ";
    for(i = 0; i < n; i++){
        cin >> arr[i];
        }
    int num;
    cout << "Enter number to check = ";
    cin >> num;
    checkunique(arr, 6, num); 
}