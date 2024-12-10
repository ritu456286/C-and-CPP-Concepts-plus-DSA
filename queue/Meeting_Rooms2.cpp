#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

int minConfRooms(vector<vector<int>>& intervals){
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    priority_queue<int, vector<int>, greater<int>> min_heap;
    min_heap.push(intervals[0][1]);
    int rooms = 1;
    for(int i = 1; i < n; i++){
        int end_time = min_heap.top();
        int start_time = intervals[i][0];
        if(end_time < start_time){
            //non intersecting
            min_heap.pop();
        }else{
            rooms++;
        }
        min_heap.push(intervals[i][1]);
    }
    return rooms;
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
    
    cout << minConfRooms(intervals) << "\n";
    return 0;
}