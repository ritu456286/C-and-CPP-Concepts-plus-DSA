#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<vector<int>> generateSubsets(vector<int> &nums){
    vector<vector<int>> ans;
    int m = nums.size();
    if(m == 0) return ans;
    int n = pow(2, m);
    for(int i = 0; i < n; i++){
        vector<int> temp;
        for(int j = 0; j < m; j++){
            int mask = 1 << j;
            if(mask & i){
                temp.push_back(nums[j]);
            }
        }
        ans.push_back(temp);
    }
    return ans;
}

int main(){
    vector<int> nums = {2,3,4};
    
    vector<vector<int>> ans = generateSubsets(nums);
    for(int i = 0; i < ans.size(); i++){
        // cout << "hello";
        cout << "[ ";
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << ",";
        }
        cout << "]" << endl;
    }
    return 0;
}