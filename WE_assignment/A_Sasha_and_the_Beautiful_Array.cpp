#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n, a;
    cin >> n;
    
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i = 0; i < n; ++i){
        cin >> a;
        if(a > maxi){
            maxi = a;
        }
        if(a < mini){
            mini = a;
        }
    }
    cout << maxi - mini << "\n";

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