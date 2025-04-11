#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    ll n, k;
    cin >> n >> k;
    ll moves = 0;
    if(n % 2){
        n -= k;
        moves++;   
    }
    if(n != 0){
        ll i = 1;
   
        ll q = n / (k - 1);
        ll r = n % (k - 1);
        moves += q;
        if(r){
            moves += 1;
        }
        
        // n -= ((k - 1) * q);
        // i += 2;
        
       
    }
    cout << moves << "\n";
    

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