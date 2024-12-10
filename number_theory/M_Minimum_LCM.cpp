#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long 

using namespace std;

ll findLCM(ll a, ll b){
    return (a / __gcd(a, b)) * b;
}

void solve(){
    
    ll n;
    cin >> n;
    //a + b == n && LCM(a, b) is minimum
    //optimal solution is that a is the largest divisor of n, so b = n - a
    ll a = 1LL;
    for(ll div = 2LL; div * div <= n; ++div){
        if(n % div == 0) {
            a = n / div;
            break;
        }
    }
    cout << a << " " << n - a << "\n";
    


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