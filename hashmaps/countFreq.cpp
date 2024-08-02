#include <iostream>
#include <map>
using namespace std;

map<int,int> countFreq(int arr[], int n){
    // if(n == 0) return {0, 0};
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }
    return mp;
}
int main(){ 
    int arr[9] = {1,2,3,3,2,3,4,1,0};
    cout << "The frequency of the elements in array is: ";
    map<int, int> ans = countFreq(arr, 9);
    for(const auto& it: ans){
        cout << it.first << " --> " << it.second << endl;
        
    }
    return 0;
}