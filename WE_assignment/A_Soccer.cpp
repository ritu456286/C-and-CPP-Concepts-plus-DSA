#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if((x1 > y1 && x2 > y2) || (y1 > x1 && y2 > x2)){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }


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