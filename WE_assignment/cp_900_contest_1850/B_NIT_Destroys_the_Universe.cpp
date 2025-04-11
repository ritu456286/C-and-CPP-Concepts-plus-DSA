#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int snaps = 0;
    for(int i = 0; i < n;++i){
        if(a[i] != 0){
            int j = i;
            while(j < n && a[j] != 0){
                j++;
            }
            i = j;
            snaps++;
        }
        if(snaps >= 2) break;
    }
    if(snaps > 2) snaps = 2;
    cout << snaps << endl;


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