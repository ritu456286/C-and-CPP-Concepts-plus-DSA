#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<ll> ps(n + 1, 0);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        ps[i + 1] = ps[i] + a[i];
    }
    
    int l, r;
    vector<ll> ans(q);
    for(int i = 0; i < q; i++){
        cin >> l >> r;
        ans[i] = ps[r] - ps[l];
    }
    for(auto& num: ans){
        cout << num << "\n";
    }

    return 0;
}