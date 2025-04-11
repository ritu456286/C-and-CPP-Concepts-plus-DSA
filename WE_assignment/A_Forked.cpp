#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;


void solve(){
    
    int a, b, xk, yk, xq, yq, ans = 0;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    unordered_map<int, unordered_map<int, int>> mp;
    mp[xk - a][yk - b] = 1;
    mp[xk - a][yk + b] = 1;
    mp[xk + a][yk + b] = 1;
    mp[xk + a][yk - b] = 1;
    mp[xk - b][yk - a] = 1;
    mp[xk - b][yk + a] = 1;
    mp[xk + b][yk + a] = 1;
    mp[xk + b][yk - a] = 1;
    if(mp[xq - a][yq - b] == 1){
        mp[xq - a][yq - b]++;
        ans++;
    }
    if(mp[xq - a][yq + b] == 1){
        mp[xq - a][yq + b]++;
        ans++;
    }
    if(mp[xq + a][yq + b] == 1){
        mp[xq + a][yq + b]++;
        ans++;
    }
    if(mp[xq + a][yq - b] == 1){
        mp[xq + a][yq - b]++;
        ans++;
    }
    if(mp[xq - b][yq - a] == 1){
        mp[xq - b][yq - a]++;
        ans++;
    }
    if(mp[xq - b][yq + a] == 1){
        mp[xq - b][yq + a] ++;
        ans++;
    }
    if(mp[xq + b][yq + a] == 1){
        mp[xq + b][yq + a]++;
        ans++;
    }
    if(mp[xq + b][yq - a] == 1){
        mp[xq + b][yq - a] ++;
        ans++;

    }
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