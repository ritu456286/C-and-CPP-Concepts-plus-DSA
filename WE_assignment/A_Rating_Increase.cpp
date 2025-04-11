#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    string ab;
    cin >> ab;
    int n = ab.size();
    string a = "", b = "";
    a += ab[0];
    int i = 1;
    while(i < n){
        if(ab[i] != '0'){
            break;
        }
        a += ab[i];
        ++i;
    }
    if(i >= n){
        cout << -1 << "\n";
        return;
    }
    int len = n - i;
    for(; i < n; ++i){
        b += ab[i];
    }
    int aa = stoi(a);
    int bb = stoi(b);
    if(aa >= bb){
        cout << -1 << "\n";
    }else{
        cout << aa << " " << bb << "\n";
    }
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