// #include <iostream>
// using namespace std;

// void merge(int arr[], int start, int mid, int end) {
//     int k = start;
//     int i = start;
//     int j = mid + 1;
//     int brr[end - start + 1];

//     while (i <= mid && j <= end) {
//         if (arr[i] < arr[j]) {
//             brr[k++] = arr[i++];
//         } else if (arr[i] > arr[j]) {
//             brr[k++] = arr[j++];
//         } else {
//             brr[k++] = arr[i++];
//             brr[k++] = arr[j++];
//         }
//     }
//     while (i <= mid) {
//         brr[k++] = arr[i++];
//     }

//     while (j <= end) {
//         brr[k++] = arr[j++];
//     }

//     // Copy back to the original array
//     for (int m = start; m < end - start + 1; m++) {
//         arr[m] = brr[m];
//     }
// }

// void mergeSort(int arr[], int start, int end) {
//     if (start < end) {
//         int mid = start + (end - start) / 2;

//         mergeSort(arr, start, mid);
//         mergeSort(arr, mid + 1, end);
//         merge(arr, start, mid, end);
//     }
// }

// int main() {
//     int arr[10] = {2, 3, 2, 1, 6, 4, 8, 7, 5, 0};
//     mergeSort(arr, 0, 9);

//     for (int i = 0; i < 10; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// C++ program for Merge Sort
#include <bits/stdc++.h>
using namespace std;
 
// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
void merge(int array[], int const left, int const mid,
           int const right)
{
    int const subArrayOne = mid - left + 1;
    int const subArrayTwo = right - mid;
 
    // Create temp arrays
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
 
    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
 
    auto indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
    int indexOfMergedArray = left;
 
    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne
           && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne]
            <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray]
                = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray]
                = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
 
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray]
            = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
 
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray]
            = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
    delete[] leftArray;
    delete[] rightArray;
}
 
// begin is for left index and end is right index
// of the sub-array of arr to be sorted
void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return;
 
    int mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
 
// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
    cout << endl;
}
 
// Driver code
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Given array is \n";
    printArray(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
 
    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}