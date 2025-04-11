#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<pair<ll, ll>> temp(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        temp[i] = {a[i], i};
    }
    
    sort(temp.begin(), temp.end());
    vector<int> marked_max(n, 0); 
    ll ans = 0;
    // vector<ll> ind_max;
    for(int i = n - k; i < n; ++i){
        marked_max[temp[i].second] = 1;
        cout << "marking: " << temp[i].second << " val: " << temp[i].first;
        ans += a[temp[i].first];
    }

    int curr_maxi = -1;
    int left_max_dis = 0;
    int left = -1, right= -1;
    for(int i = 0; i < n; ++i){
        if(marked_max[i] == 1){
            curr_maxi = i;
        }else if(curr_maxi != -1){
            if(i - curr_maxi > left_max_dis){
                left_max_dis = i - curr_maxi;
                left = i;
            }
        }
    }
    int right_max_dis = 0;
    curr_maxi = -1;
    for(int i = n - 1; i>= 0; --i){
        if(marked_max[i] == 1){
            curr_maxi = i;
        }else if(curr_maxi != -1){
            if(curr_maxi - i > right_max_dis){
                right_max_dis = curr_maxi - i;
                right = i;
            }
        }
    }
    if(left_max_dis >= right_max_dis){
        ans += a[left];
    }else{
        ans += a[right];
    }
    cout << ans << "\n";


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