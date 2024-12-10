#include <bits/stdc++.h>
#define MOD 1000000007
#define  ll long long

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int count = 0;
    for(int i = 0; i < n - 1; i++){
        if((a[i] % 2) == (a[i + 1] % 2)){
            //both odd or even
            ++count;    
        }
    }
    cout << count << "\n";
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