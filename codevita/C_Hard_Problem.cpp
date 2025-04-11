#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    long long m, a, b, c;
    cin >> m >> a >> b >> c;
    ll ans = 0;
    ll r1 = m, r2 = m;
    if(a <= m){
        ans += a;
        r1 -= a;
    }else{
        ans += m;
        r1 -= m;
    }

    if(b <= r2){
        ans += b;
        r2 -= b;
    }else{
        ans += m;
        r2 -= m;
    }

    ll rem = (r1 + r2);
    if(c <= rem){
        ans += c;
        rem -= c;
    }else{
        ans += rem;
        rem -= rem;
    }

    cout << ans << endl;

    





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