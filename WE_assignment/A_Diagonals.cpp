#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){    

    int n, k;
    cin >> n >> k;
    //total = 2n - 1
    //n 
    if(k == 0){
        cout << 0 << "\n";
        return;
    }
    //after 1 diag 
    int left = k - n;
    int ans = 1;
    int i = 1;
    while(left > 0){
        left -= (n - i);
        ++ans;
        if(left <= 0) break;
        left -= (n - i);
        ++ans;
        ++i;
    }
    cout << ans << "\n";
    return;

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