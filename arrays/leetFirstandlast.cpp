# include <iostream>
# include <vector>
using namespace std;
/*Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.*/

// int /*vector<int>*/ first_last(int nums[], int size, int target){
//     //TIME COMPLEXITY = O(N)
//     int start = 0;
//     int end = size - 1;
//     // using linear search
//     while (start <= end){
//         if (nums[start] == target && nums[end] == target){
//             cout << start << "  " << end << endl;
//             return 1;
//         }
//         if (nums[start] < target){
//             start++;
//         }
//         if (nums[end] > target){
//             end --;
//         }
//     }
//     cout << "-1 -1";
//     return -1;

    // int start = 0;
    // vector<int> ans;
    // int end = (sizeof(nums)/sizeof(nums[0])) - 1;
    // while (start < end){
    //     if (nums[start] == target && nums[end] == target){
    //         ans.push_back(start);
    //         ans.push_back(end);
    //         return ans;
    //     }
    //     if (target > nums[start]){
    //         start++;
    //     }
    //     if (target < nums[end]){
    //         end --;
    //     }
    // }
    // if (start >= end){
    //     ans.push_back(-1);
    //     ans.push_back(-1);
    //     return ans;
    // }
// }

// int main(){
//     int nums[6] = {5,7,7,8,8,10};
//     int target;
//     cout << "Enter target = ";
//     cin >> target;
//     int ans = first_last(nums,6, target);
    // vector<int> ans = first_last(nums, 6, target);
    // for (int i : ans){
    //     cout << i << " ";
    // }
    // return 0;

    // int start = 0;
    // int end = (sizeof(nums)/sizeof(nums[0])) -1;
    // // using linear search
    // while (start < end){
    //     if (nums[end] == target && nums[start] == target){
    //     // if (nums[end] == target == nums[start]){  //this statement will won't work
    //         cout << start << "  " << end << endl;
    //         break;
    //     }
    //     if (nums[start] < target){
    //         cout << "start = " << start;
    //         start++;
    //     }
    //     if (nums[end] > target){
    //         cout << "end =  " << end;
    //         end --;
    //     }
    // }if (start >= end){
    //     cout << "-1 -1";
    // }
// }


//METHOD 2  : using binary search : TIME COMPLEXITY O(logn)

int firstOcc(int arr[], int size, int target){
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while (start <= end){
        if (arr[mid] == target){
            ans = mid;
            end = mid - 1;
        }else if (arr[mid] > target){
            end = mid -1;
        }else{
            start = mid +1;

        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int target){
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while (start <= end){
        if (arr[mid] == target){
            ans = mid;
            start = mid + 1;
        }else if (arr[mid] > target){
            end = mid -1;
        }else{
            start = mid +1;

        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int nums[6] = {5,7,7,8,8,10};
    int target;
    cout << "Enter target = ";
    cin >> target;
    cout << "first occurence of " << target << "is at index = " << firstOcc(nums, 6, target) << endl;
    cout << "last occurrence of " << target << "is at index = " << lastOcc(nums, 6, target) << endl;

}