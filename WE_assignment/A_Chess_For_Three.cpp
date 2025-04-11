#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int p1,p2,p3;
    cin >> p1 >> p2 >> p3;
    if((p1 + p2 + p3) % 2){
        cout << -1 << "\n";
        return;
    }
    if(p3 >= p1 + p2){
        cout << p1 + p2 << "\n";
        return;
    }
    cout << (p1 + p2 + p3) / 2 << "\n";
    



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