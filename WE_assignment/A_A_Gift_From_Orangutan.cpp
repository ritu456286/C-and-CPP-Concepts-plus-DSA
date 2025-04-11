#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i  <n; i++){
        cin >> a[i];
    }

    if(n == 1){
        cout << 0 << "\n";
        return;
    }
    int maxi = *max_element(a.begin(), a.end());
    int mini = *min_element(a.begin(), a.end());

    //first is maxi, and second is mini
    //ans = n - 1 times maxi - mini
    cout << (n - 1) * (maxi - mini) << "\n";


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