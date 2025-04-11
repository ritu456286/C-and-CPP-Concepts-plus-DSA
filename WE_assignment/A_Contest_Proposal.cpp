#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    vll a(n), b(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }
    
    ll ans = 0;
    int ai = 0, bi = 0;
    while(bi < n){
        if(a[ai] > b[bi]){
            ans++;
            ++bi;
        }else{
            ++bi, ++ai;
        }
    }

    cout << ans << "\n";

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