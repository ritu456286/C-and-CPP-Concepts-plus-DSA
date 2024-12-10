#include <bits/stdc++.h>
#define MOD 1000000007
#define long long ll

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int l = 0, r = n - 1;
    bool isSame = true;
    for(int i = 0; i < n - 1; ++i){
        if(a[i + 1] != a[i]) isSame = false;
    }
    if(isSame){
        // cout << "isamme" << " ";
        cout << 0 << "\n";
        return;
    }

    while(l < n - 1 && a[l] == a[l + 1]) ++l;
    while(r > 0 && a[r] == a[r - 1]) r--;

    if(a[l] == a[r]){
        //  cout << "betweenSegment" << " " << l << " " << r << "\n";
        cout << max(1, r - l - 1) << "\n";
    }else{
        // cout << "front or back" << l << " " << r << " ";
        cout << min(n - 1 - l, r) << "\n";
    }
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