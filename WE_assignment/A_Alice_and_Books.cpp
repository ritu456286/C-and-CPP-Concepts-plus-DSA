#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    ll n, a, maxi = -1;
    cin >> n;
    for(int i= 1; i < n; ++i){
        cin >> a;
        if(a >= maxi){
            maxi = a;
        }
    }
    cin >> a;
    cout << maxi + a << endl;


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