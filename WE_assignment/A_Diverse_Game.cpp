#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n, m, aij;
    cin >> n >> m;
    vector<vector<int>> a(n , vector<int>(m , 0));
    for(auto&i: a){
        for(auto&j: i) cin >> j;
    }
    if(n*m == 1) cout << "-1\n";
    else{
        for(int i = 0; i <n; ++i){
            for(int j = 0; j < m; ++j){
                cout << a[(i + 1) % n][(j + 1) % m] << " ";
            }
            cout << "\n";
        }
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