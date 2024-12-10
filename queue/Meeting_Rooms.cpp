#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

bool intersect(vector<int>& interval1, vector<int>& interval2){
    int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];

    if(start2 > end1) return false;
    return true;
}

bool canAttend(vector<vector<int>> &intervals){
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    for(int i = 0; i < n - 1; i++){
        if(intersect(intervals[i], intervals[i+1])){
            return false;
        }
    }
    return true;
}

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    vector<vector<int>> intervals;
    // vector<int> temp(2);
    int n, a, b;
    cin>> n;
    for(int i =0; i < n; i++){
        cin >> a >> b;
        intervals.push_back({a, b});
    }

    cout << canAttend(intervals) << "\n";

    return 0;
}