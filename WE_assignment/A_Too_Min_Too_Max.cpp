#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int i = a[0];
    
    int k = a[1];
    int l = a[n - 2];
    int j = a[n - 1];

    int ans = abs(i - j) + abs(i - l) + abs(k - l) + abs(k - j);
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