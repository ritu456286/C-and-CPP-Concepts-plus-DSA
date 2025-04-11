#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i =0; i < n; ++i){
        cin >> a[i];
        if(a[i] == 1){
            a[i]+= 1;
        }
    } 
    for(int i = 1; i < n; ++i){
        if(a[i] % a[i - 1] == 0){
            a[i]++;
        }
    }
    for(int i = 0; i < n; ++i){
        cout << a[i]<< " ";
    }
    cout << endl;


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