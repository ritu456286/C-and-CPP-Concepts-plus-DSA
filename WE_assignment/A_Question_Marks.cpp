#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n;
    string s;
    cin >> n;
    cin >> s;
  
    int maxScore = 0;
    int freq[4] = {0};
    for(auto&ch: s){
        if(ch >= 'A' && ch <= 'D'){
           
            freq[ch - 'A']++;
        }
    }
    for(int i = 0; i < 4; ++i){
        maxScore += min(freq[i], n);
    }
    cout << maxScore << "\n";


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