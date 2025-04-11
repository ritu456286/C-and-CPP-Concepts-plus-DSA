#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    vector<int> freq(n + 1, 0);

    int maxi = INT_MIN;
    int ele;
    for(int i = 1; i <= n;++i){
        cin >> ele;
        freq[ele]++;
    }
    for(int i = n; i >= 1; --i){
        if(freq[i] % 2){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";



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