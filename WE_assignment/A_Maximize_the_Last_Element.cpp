#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    int maxi = INT_MIN;
    int ele;
    for(int i = 1; i <= n; ++i){
        cin >> ele;
        if(i % 2 && ele > maxi){
            maxi = ele;
        }
    }
    cout << maxi << "\n";


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