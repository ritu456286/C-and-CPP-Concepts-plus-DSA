#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    ll n, first, a, currMax;
    ll k ;
    cin >> n; 
    cin >> first;
    currMax = first;
    k = LLONG_MAX;
    for(int i = 2; i<=n; ++i){
        cin >> a;
        currMax = max(first, a);
        first = a;
        k = min(currMax, k);
    }
    cout << k - 1 << endl;


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