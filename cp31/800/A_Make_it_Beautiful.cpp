#include <bits/stdc++.h>
#define MOD 1000000007
#define long long ll

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    } 
    if(n == 1) {
        cout << "YES" << "\n";
        cout << a[0] << " ";
    }else if(a[n - 1] != a[0]){ //maxi != mini
        cout << "YES" << "\n";
        swap(a[n - 2], a[0]);     
        for(int i = n - 1; i >= 0; --i) cout << a[i] << " ";       
    }else{
        cout << "NO";
    }
    
    cout << "\n";
    return;

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