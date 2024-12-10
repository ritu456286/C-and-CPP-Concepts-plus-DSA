#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

int maxValue(int i, vector<int>& weights, vector<int>& values, int targetWeight){
    if(i < 0 || targetWeight == 0){
        return 0;
    }
    
    int take = INT_MIN;
    if(targetWeight - weights[i] >= 0){
        take = values[i] + maxValue(i - 1, weights, values, targetWeight - weights[i]);
    }
    int notTake = maxValue(i - 1, weights, values, targetWeight);
    return max(take, notTake);
}

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    int n, W;
    cin >> n >> W;
    vector<int> weights(n);
    vector<int> values(n);
    for(int i = 0; i < n; i++){
        cin >> weights[i] >> values[i];
    }

    cout << maxValue(n - 1, weights, values, W) << "\n";
    return 0;
}