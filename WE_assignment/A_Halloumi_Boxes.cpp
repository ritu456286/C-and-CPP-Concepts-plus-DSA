#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n,k, prev, a;
    cin >> n >> k;
    bool isIncreasing = true;
    cin >> prev;
    for(int i = 1; i < n; ++i){
        cin >> a;
        if(a < prev) isIncreasing=false;
        prev = a;
    }
    if(k == 1 && !isIncreasing){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";


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