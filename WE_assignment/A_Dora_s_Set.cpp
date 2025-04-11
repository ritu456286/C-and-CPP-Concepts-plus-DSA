#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;


void solve(){
    
    int l, r;
    cin >> l >> r;
    int n = r - l + 1;
    int oddNumbers = 0;
    for(int i = l; i <= r; ++i){
        if(i & 1){
            oddNumbers++;
        }
    }
    cout << oddNumbers / 2 << endl;




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