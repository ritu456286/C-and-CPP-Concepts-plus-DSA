#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    ll n, x;
    cin >> n >> x;
    ll MEX = n;
    vector<ll> freq(n + 1, 0);
    vector<ll> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(a[i] <= n) freq[a[i]]++;
    }
    for(int i = 0; i <= n; ++i){
        if(freq[i] == 0){
            MEX = i;
            break;
        }else if(freq[i] > 1){
            if (i + x <= n) freq[i + x] += freq[i] - 1;
            freq[i] = 1;
        }
    }
    cout << MEX << "\n";

    


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