#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    ll n, m, a, b, k;
    cin >> n >> m;
    vector<ll> prefix(n + 2, 0); //{0, a1, a2, a3 ... an, 0}
    for(ll i = 0LL; i < m; ++i){
        cin >> a >> b >> k;
        prefix[a] += k;
        prefix[b + 1] -= k;
    }

    //propagate all updates till end of the array
    ll largest = 0LL;
    for(int i = 1; i <= n; i++){
        prefix[i] += prefix[i - 1];
        largest = max(prefix[i], largest);
    }
    cout << largest << "\n";
    return 0;
}