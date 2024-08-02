#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {3,5, 5, 5, 6, 0, 1, 1, 2, 3, 3, 3};
    int n = nums.size();
    int l = 0, r = n - 1;
    int mid = l + (r - l) / 2;
    int ans = 0;
    while(l <= r){
        bool inLowerHalf = nums[mid] <= nums[n - 1];
        if(inLowerHalf){
            //eliminate the lowerHalf
            r = mid - 1;
        }else{
            //in upper half
            ans = nums[mid];
            l = mid + 1;
        }
        mid = l + (r - l) / 2;
    }
    cout << ans << endl;

    return 0;
}