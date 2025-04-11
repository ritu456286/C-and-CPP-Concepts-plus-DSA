#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

ll power(ll a, ll b, ll mod){
    if(b == 0) return 1;
    if(b == 1) return a;
    if(a == 0) return 0;
    if(b % 2){
        return (a * power(a, b - 1, mod)) % mod;
    }
    ll res = power(a, b/2, mod);
    return (res * res) % mod;
}

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    int t;
    cin >> t;
  
    vector<ll> n(t, 0);
    vector<ll> k(t, 0);
    for(int i = 0; i < t; ++i){
        cin >> n[i];
    }
    for(int i = 0; i < t; ++i){
        cin >> k[i];
    }
    
    for(int i = 0; i < t; ++i){
      
        if(k[i] == n[i] || k[i] == 0) cout << 1 << "\n";
        else{
            ll sol = power(2, k[i], MOD);
            cout << sol << "\n";
        }
    }
    cout << "\n";

    
    return 0;
}