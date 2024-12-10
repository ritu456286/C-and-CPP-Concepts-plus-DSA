#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void printEvenIndices(int curr_i, ll a[1000], int n){
    if(curr_i >= n) return;
    printEvenIndices(curr_i + 2, a, n);
    
    //even index
    cout << a[curr_i] << " ";
    
}

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    int n;
    cin >> n;
    ll a[1000];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    printEvenIndices(0, a, n);
    cout << "\n";

    return 0;
}