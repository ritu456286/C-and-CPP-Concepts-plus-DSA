#include <bits/stdc++.h>
using namespace std;


//link - https://leetcode.ca/2019-04-14-1231-Divide-Chocolate/

bool isPossible(int x, vector<int>& sweetness, int k){
    int cnt = 0;
    int sum = 0;
    for(int& s: sweetness){
        sum += s;
        if(sum >= x){
            sum = 0;
            cnt ++;
        }
    }
    return cnt > k;
}

int output(vector<int>& sweetness, int k){
    int l = 0, r = accumulate(sweetness.begin(), sweetness.end(), 0);
    int mid = l + (r - l) /2;
    while(l <= r){
        if(isPossible(mid, sweetness, k)){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
        mid = l + (r - l) /2;
    }
    return l;
}
int main(){
    // vector<int> sweetness = {1,2,3,4,5,6,7,8,9};
    // vector<int> sweetness = {5,6,7,8,9,1,2,3,4};
    vector<int> sweetness = {1,2,2,1,2,2,1,2,2};
    int k = 2;
    cout << output(sweetness, k) - 1<< endl;
    
    return 0;
}