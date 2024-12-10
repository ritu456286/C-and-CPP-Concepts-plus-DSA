#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    int arr[] = {1,2,2,1,3,3};
    int n  = sizeof(arr)/sizeof(arr[0]);
    
    //without sorting
    for(int i = 1; i < n; i++){
        if((i % 2 == 1 && arr[i] < arr[i - 1]) || (i % 2 == 0 && arr[i] > arr[i - 1])){
            swap(arr[i], arr[i - 1]);
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}