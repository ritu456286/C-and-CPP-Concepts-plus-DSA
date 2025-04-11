#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll currCount = 1, maxCount = 0;

    for(int i = 1; i < n; ++i){
        if(a[i] - a[i - 1] <= k){
            currCount++;
        }else{
            maxCount = max(maxCount, currCount);
            currCount = 1;
        }
    }
    maxCount = max(maxCount, currCount);
    cout << n - maxCount << "\n";



}
int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}