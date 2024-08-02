#include <bits/stdc++.h>
using namespace std;

//link https://github.com/doocs/leetcode/blob/main/solution/1800-1899/1891.Cutting%20Ribbons/README_EN.md

bool isPossible(int x, vector<int>& ribbons, int k){
    int cnt  = 0;
    for(int& length: ribbons){
        cnt += (length / x);
    }
    return cnt >= k;
}

int maxLength(vector<int>& ribbons,  int k){
    int l = 1;
    int r = accumulate(ribbons.begin(), ribbons.end(), 0) / k;
    int mid = l + (r - l) / 2;
    while(l <= r){
        if(isPossible(mid, ribbons, k)){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
        mid = l + (r - l) / 2;
    }
    return r;
}

int main(){
    // vector<int> ribbons = {9,7,5};
    // vector<int> ribbons = {7,5,9};
    vector<int> ribbons = {5,7,9};
    int k = 22;
    cout << maxLength(ribbons, k) << endl;
    return 0;
}