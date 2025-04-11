#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    int ans = 0;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    //SOL 1
    // int i = 1;
    // while(i <= n && a[i] == 0){
    //     ++i;
    // } 
    // while(i <= n && a[i] == 1){
    //     ++i;
    // }
    // int j = i;
    
    // //i is on first 0 after group of 1s
    // while(j <= n){
    //     while(j <= n && a[j] == 0) ++j;
    //     if(j <= n && a[j] == 1){
    //         ans += j - i;
    //         while(j <= n && a[j] == 1) ++j;
    //         i = j;
    //     }
    // }

    //SOL 2
    int l = -1, r= -1;
    for(int i  = 1; i <= n; ++i){
        if(a[i] == 1){
            if(l == -1) l = i;
            r = i;
        }
    }
    ans = r - l + 1 - accumulate(a.begin(), a.end(), 0);
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