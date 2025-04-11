#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    // auto get_sqrt = [&](ll x) {
    //     ll l = 0, r = 2e9;
    //     while(l < r){
    //         ll mid = (l + r + 1) >> 1;
    //         if(mid * mid <= x){
    //             l = mid;
    //         }else{
    //             r = mid - 1;
    //         }
    //     }
    //     return l;
    // };
    auto get_sqrt = [&](ll x){
        ll l = 0, r = x;
        ll ans = 0;
        while(l <= r){
            ll mid = (l + r) >> 1;
            if(mid * mid == x) return mid;
            if(mid * mid < x){
                ans = mid;
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        return ans;
    };
    ll k;
    cin >> k;
    ll l = 1, r = 2e18;
    while(l < r){
        ll mid = (l + r) >> 1;
        // if(mid - (int)sqrtl(mid) < k){
        if(mid - get_sqrt(mid) < k){
            l = mid + 1;
        }else{
            r = mid;
        }
    }
    cout << r << "\n";
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