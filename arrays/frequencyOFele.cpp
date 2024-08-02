# include <iostream>
using namespace std;

// programmed without using another countFrequency function because c++ doesn't allow to 
//return an array instead the concept of pointers is used to return array.
//in python use dictionary to count frequency is easier
//here use the concept of visited

// int main(){
//     //declaring an array
//     int arr[] = {10, 30, 10, 20, 10, 20, 30, 10};
//     int n = sizeof(arr)/sizeof(int);

//     //mark all elements as not visited.
//     bool visited[n] = {false};
    
//     //Traverse through each element and count the frequency [using linear search]
//     for (int i = 0; i < n; i++){
//         int count = 1;

//         //if already visited, skip the element
//         if (visited[i]){
//             continue;
//         }

//         //else search for other duplicates, if found increment counter.
//         for (int j = i+1; j < n; j++){
//             if (arr[j] == arr[i]){
//                 visited[j] = true;
//                 count++;
//             }
//         }
//         //printing the element and corresponding frequency.
//         cout << arr[i] << " = " << count << endl;
//     }
//     return 0;
// }

//WAP to find the frequency of a given element in the array.
//method 1 ; using linear search time complexity = O(n)
// binary search can be used to find the leftmost and rightmost occurrence of the element

//METHOD 2 : using binary search time complexity = O(logn) // WILL NOT WORK
// int freq_of_ele(int arr[], int size, int key){
//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end - start)/2;
//     int count = 0;
//     // bool visited[size] = {false};

//     //counting left most occurrence of element
//     while (start <= end){
        
//         if (arr[mid] == key){
//             // visited[mid] = true;
//             count ++;
//             end = mid - 1;
//         }
//         else if(key > arr[mid]){
//             start = mid + 1;
//         }else{
//             end = mid - 1;
//         }
//         mid = start + (end - start)/2;
//     }
//     cout << count << endl;
//     start = 0;
//     end = size - 1;
//     mid = (start + (end - start)/2) + 1;

//     // counting rightmost occurrence of element.
//     while (start <= end){
//         if (arr[mid] == key){
//             // if (!visited){
//             count ++;
//                 // visited[mid] = true;
//             // }
//             start = mid + 1;
//         }
//         else if(key > arr[mid]){
//             start = mid + 1;
//         }else{
//             end = mid - 1;
//         }
//         mid = start + (end - start)/2;
//     }
//     return count;
// }

int leftOCc(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    // to find the index of left most occurrence of element
    while (start <= end){
        if (arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }else if (arr[mid] < key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int rightOcc(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    // to find the index of right most occurrence of element
    while (start <= end){
        if (arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }else if (arr[mid] < key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main(){
    int key;
    cout << "enter key = ";
    cin >> key;
    //NOTE: Array must be sorted in ascending order for this program to work
    int arr[] = {10, 10, 10, 20, 20, 20,20, 30, 30, 30};
    int n = sizeof(arr)/sizeof(int);
    // cout << "size of array = " << n << endl;
    int left_index = leftOCc(arr, n, key);
    int right_index = rightOcc(arr, n, key);
    int freq = right_index - left_index + 1;
    // cout << left_index << endl;

    cout << "frequency of element " << key << " = " << freq << endl;
}