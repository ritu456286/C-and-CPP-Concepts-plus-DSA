#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    if(n % 2){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    int c = 0;
    for(int i = 0; i < n; i += 2){
        char ch = 'A' + c++;
        cout << ch << ch << "";
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