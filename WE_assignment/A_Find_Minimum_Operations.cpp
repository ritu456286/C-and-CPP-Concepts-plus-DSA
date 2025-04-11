#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    ll n, k;
    cin >> n >> k;
    if(n < k || k == 1){
        cout << n << endl;
        return;
    }
    if(n == k || n == 1){
        cout << 1 << endl;
        return;
    }
    int count = 1;
    while(n > 1){
        count += (n % k);
        n = n / k;
        if(n == 0){
            count--;
            
        }
    }

    cout << count << endl;
    


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