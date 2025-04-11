#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
#define vi vector<int>
using namespace std;

void solve(){
    
    int n, a;
    cin >> n;
    unordered_map<int, int> freq;
    for(int i = 1; i  <= n; ++i){
        cin >> a;
        freq[a]++;
    }
    int polygons = 0;
    for(auto&it: freq){
        if(it.second >= 3){
            polygons += (it.second / 3);           
        }
    }
    cout << polygons << "\n";

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