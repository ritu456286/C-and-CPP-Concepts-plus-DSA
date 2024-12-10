#include <bits/stdc++.h>
#define MOD 1000000007
#define long long ll

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n ; i++){
        cin >> a[i];
    }
    int min_gcd = INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            min_gcd = min(__gcd(a[i], a[j]), min_gcd);
        }
    }
    if(min_gcd <= 2) cout << "Yes" << endl;
    else cout << "No" << endl;
    return;


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