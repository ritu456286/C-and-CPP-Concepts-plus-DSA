#include <iostream>
#include <vector>
using namespace std;

int minMoves(vector<int>& arr, int n){
    int moves = 0;
    for(int i = 0; i < n - 1; i++){
        if(arr[i + 1] >= arr[i]){

        }else{
            moves += (arr[i] - arr[i + 1]) % 100000007;
            arr[i + 1] = arr[i];
        }
    }
    return moves;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << minMoves(arr, n);
    return 0;
}