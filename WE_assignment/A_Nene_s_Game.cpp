#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int k, q, ele, n;
    cin >> k >> q;
    int first;
    cin >> first;
    for(int i = 1; i < k; ++i){
        cin >> ele;
    }

    for(int i = 1; i <= q; ++i){
        cin >> n;
        if(n < first){
            cout << n << " ";
        }else{
            cout << first - 1<< " ";
        }
    }
    cout << "\n";

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