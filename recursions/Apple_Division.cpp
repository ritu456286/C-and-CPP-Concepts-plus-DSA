#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void getAns(int i, int& n, vector<ll>& p, ll curr_sum, ll& total, ll& ans){
    if(i >= n){
        ans = min(ans, abs(total - curr_sum - curr_sum));
        return;
    }
    getAns(i + 1, n, p, curr_sum + p[i], total, ans);
    getAns(i + 1, n, p, curr_sum, total, ans);
    return;
}

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    int n;
    cin >> n;
    vector<ll> p(n);
    ll total = 0;
    for(int i = 0; i < n; ++i){
        cin >> p[i];
        total += p[i];
    }
    ll ans = total;
    ll curr_sum = 0;
    getAns(0, n, p, curr_sum, total, ans);
    cout << ans << "\n";
}