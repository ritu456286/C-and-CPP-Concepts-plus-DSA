# include <iostream>
using namespace std;
//given a mountain array, find the index of the peak element
//METHOD 1 : using linear search find the largest element , time complexity = O(n)
// METHOD 2 : using binary search : find the largest element in the mountain array, time complexity = O(log n);
int find_index_of_PEAK(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while (start <= end){
        cout << "inside while loop" << endl;
        if (arr[mid] > arr[mid +1] && arr[mid] > arr[mid - 1]){
            return mid;
        }else if (arr[mid + 1] > arr[mid]){
            start = mid + 1;
        }else if (arr[mid - 1] > arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
        if (mid == 0){
            mid++;
        }else if (mid == size - 1){
            mid --;
        }
    }
    return -1;
}
int main(){
    int arr[] = {0,5,10,2};
    int n = sizeof(arr)/sizeof(int);
    cout << "calling function" << endl;
    int ans = find_index_of_PEAK(arr, n);
    cout << ans;

}