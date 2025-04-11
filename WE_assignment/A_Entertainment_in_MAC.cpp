#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool same_s = true;
    int i = 0, j = s.size() - 1;
    while(i < j){
        if(s[i] == s[j]){
            i++, j--;
        }else{
            if(s[i] < s[j]){
                //same string is needed
                same_s = true;
                break;
            }else{
                same_s = false;
                break;
            }
        }
    }
    if(same_s){
        cout << s << "\n";
    }else{
       string rev = s;
       reverse(rev.begin(), rev.end());
       cout << rev + s << "\n";

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