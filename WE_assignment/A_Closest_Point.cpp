#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n;
    cin >> n;  
    int prev, ele;
    cin >> prev;
    for(int i = 1; i < n; ++i){
        cin >> ele;
    }
    if(n > 2 || abs(prev - ele) <= 1 ){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << '\n';



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