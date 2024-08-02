#include <iostream>
#include <vector>
using namespace std;

vector<int> removeDup(int arr[], int size){
    //using hash maps
    vector<int> ans;
    int hash[size] = {0};
    for(int i = 0; i < size; i++){
        if(hash[arr[i]] > 0){
            //element is duplicate
            continue;
        }else{
            hash[arr[i]]++;
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

void removeDup2(int arr[], int size){
    //this works in sorted array
    //use 2 pointer to reduce space complexity
    int i = 0, j = 1;
    while(i < size && j < size){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j]; 
        }
        j++;
    }
}
int main(){
    int arr[9] = {1,2,3,4,4,6,7,7,9};
    vector<int> ans= removeDup(arr, 9);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }

    removeDup2(arr, 9);
    for(int i = 0; i < 9; i++){
        cout << arr[i] << " ";
    }
    return 0;   
}