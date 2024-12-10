 #include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    ll a, b, n;
    cin >> a >> b >> n;
    vector<ll>x(n);
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }

    sort(x.begin(), x.end());

    ll curr = 1;
    ll ans = b;
    ll initial = 0;
    int i = 0;
    for(; i < n; i++){
        initial += x[i];
        if(initial > a){
            initial -= x[i];
            break;
        }
    }
    curr = min(curr + initial, a) - 1;
    ans += curr;
    curr = 1;
    for(; i < n; i++){
        curr =  min(curr + x[i], a) - 1;
        ans += curr;
        curr = 1;
    }
    ans += 1;
    //from i to n - 1 only one

    
    
    cout << ans << "\n";


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
