#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n, a, x;
    cin >> n;
    int not_to_include = 0;
    vector<int> nn;
    pair<int, int> range = {1, 1e9};
    for(int i = 1; i <= n; ++i){
        cin >> a >> x;
        if(a == 1){
            range.first = max(range.first, x);
        }else if(a == 2){
            range.second = min(range.second, x);
        }else{
            nn.push_back(x);
        }
    }
    if(range.second < range.first){
        cout << 0 << "\n";
        return;
    }
    for(auto&nnn: nn){
        if(nnn >= range.first && nnn <= range.second){
            not_to_include++;
        }
    }
    cout << range.second - range.first + 1 - not_to_include << "\n";



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