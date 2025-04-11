#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n, k;
    cin >> n >> k;
    if(n == 1 && k == 1){
        cout << 'a' << "\n";
        return;
    }

    int len = n * k;
    string s = "";
    for(int i = 0; i < k; ++i){
        s += ('a' + i);
    }
    //n times this k length string, 
    string original = s;
    for(int i = 0; i < n - 1; ++i){
        s += original;
    }
    cout << s << "\n";


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