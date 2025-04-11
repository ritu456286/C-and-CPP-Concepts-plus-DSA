#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    //break the harmony
    string s;
    cin >> s;
    string new_s = "";
    // if(s.size() == 1){
    //     new_s = s;
    //     new_s += 'a' + (s[0] - 'a' + 2) % 26;
        
    //      cout << new_s << "\n";
    //      return;
    // }
    new_s += s[0];
    bool done = false;
    for(int i = 1; i < s.size(); ++i){
        if(!done && s[i - 1] == s[i]){
            done = true;
            //insert it here;
            new_s += 'a' + ((s[i] - 'a') + 1)% 26;      
            
        }
        new_s += s[i];
    }
    if(new_s == s){
        new_s += 'a' + (s[s.size() - 1] - 'a' + 1) % 26;
    }
    cout << new_s << endl;
    return;


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