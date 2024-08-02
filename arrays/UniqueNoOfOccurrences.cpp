# include <iostream>
# include <bits/stdc++.h>
# include <vector>
using namespace std;
// Given an array of integers arr, return true if the number of occurrences of each value
// in the array is unique or false otherwise.
// {1,1,2,2,3} ==> false because 2 and 1 occurs 2 times.
// {1,2,2,3,4,3,3,4,4,4} ==>  true because every element's frequency is different.
//COMPLETED!!!

//NESTED FUNCTIONS ARE ALLOWED IN PYTHON BUT NOT IN C OR C++
//using binary search : we first founded the frequency of each element and stored it in a vector. 
//Then checked if all integers in vector are unique.


int rightOcc(int arr[], int size, int ele){
    
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start)/2;
    while (start <= end){
        if (arr[mid] == ele){
            ans = mid;
            start = mid + 1;
        }else if (ele > arr[mid]){
            start = mid + 1;
        }else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int leftOcc(int arr[], int size, int ele){

    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start)/2;
    while (start <= end){
        if (arr[mid] == ele){
            ans = mid;
            end = mid -1;
        }else if (ele > arr[mid]){
            start = mid + 1;
        }else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
    
int main() {

    //array declaration
    int arr[] = {1,2,2,2,4,4,2,2,9,9,4,9,9};
    int n = sizeof(arr)/ sizeof(int);
    sort (arr, arr+n);

    // declaring left and right index of element in array as -1 i.e. not found
    int left = -1; 
    int right = -1;
    int freq;
    vector <int> frequency;

    // marking each element as not visited
    bool visited[n] = {false};

    // to count the frequency of each element using binary search
    for (int i = 0; i < n; i++){
        if (i != 0 && arr[i] == arr[i-1]){
            visited[i] = true;
            continue;
        }
        if (visited[i]){
            continue;       
        }

        // calling functions
        left = leftOcc(arr, n, arr[i]);  // to check the leftmost index of element
        right = rightOcc(arr, n, arr[i]);   // to check the rightmost index of element.
        freq = right - left + 1;    // to calculate the frequency of the element
        frequency.push_back(freq);    // storing the frequency of element in vector named frequency.  
    }

    // setting flag down i.e. initially we assumed that all frequencies are unique
    int flag = 0;
    sort(frequency.begin(), frequency.end()); // sorting the vector frequency

    // to check if every frequency in the vector is unique
    for (int i = 0; i < frequency.size(); i++){
        
        for (int j = i+1; j < frequency.size(); j++){

            // if frequency of two elements is matched set the flag high and break
            if (frequency[i] == frequency[j]){
                flag = 1;
                break;
            }
            break;
        }

        // if flag is high means every frequency is not unique
        if (flag == 1){
            cout << "all not unique";
            break;
        }
    }

    // if flag is down means every frequency is unique
    if (flag == 0){
        cout << "all unique";
    }

    return 0;
}