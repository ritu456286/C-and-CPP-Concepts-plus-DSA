#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n,x ;
    cin >> n >> x;

    ll sum = 0LL;
    ll maxi  = 0LL;
    ll a;
    for(int i = 0; i < n; i++){
        cin >> a;
        sum += a;
        maxi = max(maxi, a);
    }

    ll avg = (sum / x) + (sum % x != 0);
    cout << max(maxi, avg) << "\n";


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