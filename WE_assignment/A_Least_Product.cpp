#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n, a;
    cin >> n;
    int num_neg = 0;
    bool found_zero = false;
    for(int i = 0; i < n; ++i){
        cin >> a;
        if(a < 0){
            num_neg++;
        }else if(a == 0){
            found_zero = true;
        }
    }
    if(found_zero || num_neg % 2){
        cout << 0 << "\n";
        return;
    }
    cout << 1 << "\n" << 1 << " " << 0 << "\n";


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