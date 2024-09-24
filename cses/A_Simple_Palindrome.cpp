#include <bits/stdc++.h>
#define MOD 1000000007
#define long long ll

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    string s = "";
    vector<char> vowels = {'a', 'e', 'o', 'i', 'u'};
    if(n <= 5){
        while(n--){
            s += vowels[n];
        }
    }else{
        s = "aeiou";
        n -= 5;
        for(int i = 0; i < n; i++){
            s += 'u';
        }
    }
    
    cout << s << "\n";
    return;

}
int main(){
  
    // ios_base::sync_with_stdio(0);cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}