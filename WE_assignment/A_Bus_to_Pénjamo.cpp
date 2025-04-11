#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n, r;
    cin >> n >> r;
    int total_members = 0;
    int left_members = 0;
    for(int i =0 ; i < n; ++i){
        int a;
        cin >> a;
        total_members += a;
        left_members += (a % 2);
    }

    int seats_left = 2 * r - (total_members -left_members);

    int rows_left = seats_left / 2;
    if(rows_left >= left_members){
        cout << total_members << "\n";
        return;
    }
    int left_happy = left_members % rows_left == 0 ? 0 : rows_left - (left_members % rows_left);
    cout << (total_members - left_members + left_happy) << "\n";

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