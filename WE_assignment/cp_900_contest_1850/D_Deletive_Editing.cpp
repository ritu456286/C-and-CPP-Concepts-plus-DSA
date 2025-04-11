#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    string s, ss;
    cin >> s >> ss;
    
    vector<int> freq_s(26, 0);
    vector<int> freq_ss(26, 0);
    
    for(auto& ch: s){
        freq_s[ch - 'A']++;
    }
    
    for(auto& ch: ss){
        freq_ss[ch - 'A']++;
    }
    
    vector<int> freq_dropped(26, 0);
   
    for(int i = 0; i < 26; ++i){
        freq_dropped[i] = freq_s[i] - freq_ss[i];
        
        if(freq_dropped[i] < 0){
            cout << "NO\n";
            return;
        }
    }
    
    string ans = "";
  
    
    for(auto&ch: s){
        if(freq_dropped[ch - 'A'] == 0 && freq_ss[ch - 'A'] > 0){
            ans += ch;
        }else if(freq_dropped[ch - 'A'] > 0){
            freq_dropped[ch - 'A']--;
        }

    }
    cout << (ans == ss ? "YES\n" : "NO\n");


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