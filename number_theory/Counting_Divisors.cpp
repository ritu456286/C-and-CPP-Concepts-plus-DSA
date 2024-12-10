#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

unordered_map<ll, ll> num_divisors;

ll countDivisors(ll n){
    ll count = 0;
    for(int i = 1; 1LL*i*i <= n; ++i){
        if(n % i == 0){
            count++;
            if(n/i != i){
                count++;
            }
        }
    }
    return num_divisors[n] = count;
}

void solve(){
    
    ll n;
    cin >> n;
    if(num_divisors[n] != 0) {
        cout << num_divisors[n] << "\n";
        return;
    }
    cout << countDivisors(n) << "\n";
    
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
