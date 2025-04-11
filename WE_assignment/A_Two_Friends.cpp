#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
#define vi vector<int>
using namespace std;

void solve(){
    
    int n;
    cin >> n;
    vi p(n + 1);
    for(int i = 1; i <= n; ++i){
        cin >> p[i];
    }

    for(int i = 1; i <= n; ++i){
        if(i == p[p[i]]){
            cout << 2 << "\n";
            return;
        }
    }

    cout << 3 << "\n";

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