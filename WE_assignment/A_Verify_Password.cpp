#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;


bool isDigit(char c){
    return c >= '0' && c <= '9';
}
void solve(){
    
    int n;
     cin >> n;
    string s;
    cin >> s;
    int index = 1;
    char prev = s[0];
   
    while(index < n && isDigit(s[index])){
        if(s[index] < prev){
            cout << "NO\n";
            return;
        }
        prev = s[index];
        ++index;
    }   
    
    while(index < n){
        if(isDigit(s[index]) || prev > s[index]){
            cout << "NO\n";
            return;
        }
        prev = s[index];
        ++index;
    }
    cout << "YES\n";


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