#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n, m, k;
    cin >> n >> m >> k;
    //atmost n - k - 1 parts are allowed to have same color
    int same_allowed = n - k - 1;
    //m different colors 
    int max_len = m * same_allowed;
    cout << (max_len >= n ? "YES\n" : "NO\n");


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