#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    int n, q, a, b;
    cin >> n >> q;
    // vector<ll> a[n];
    ll a_i;
    vector<ll> ps(n + 1, 0);
    for(int i = 0; i < n; i++){
        cin >> a_i;
        ps[i + 1] = ps[i] + a_i;
    }   
    vector<ll> outputs(q);
    for(int i = 0; i <  q; i++){
        cin >> a >> b;
        outputs[i] = ps[b] - ps[a - 1];
    }
    for(int i = 0; i < q; i++){
        cout << outputs[i] << "\n";
    }



    return 0;
}