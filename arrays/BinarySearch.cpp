# include <iostream>
using namespace std;
//BINARY SEARCH is applied only on sorted array.
int ElementIndex(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    // declaring the middle index
        
    int mid = start + (end - start)/ 2; 
    while (start <= end){
        
        if (arr[mid] == key){
            return mid; // if element is found returning the index value
        }else if (arr[mid] < key){
            start = mid + 1; // if our element is greater than the mid element then move to right wala part which has greater values.
        }else{
            end = mid -1; // if element is less than the mid value going to left wala part           
        }
        mid = start + (end - start)/ 2;
    }
    return -1; // if element not found hua to return -1


}
int main() {
    int odd[5] = {1,3,4,5,6}; // in our case we take arrays sorted in ascending order.
    int even[6] = {2,3,5,6,7,8};
    int key; // inputting key which is search for in the array
    cout << "Enter the value of element to found in the array.= ";
    cin >> key;
    int ans = ElementIndex(even, 6, key);
    if (ans == -1){
        cout << "Element not found!" << endl;
    }else{ 
        cout << "Index of element = " << ans << endl;
    }

}