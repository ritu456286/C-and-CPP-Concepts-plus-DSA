#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

// MY SOLUTION
void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    pair<int, vector<int>> mini, maxi;

    mini.first = INT_MAX;
    maxi.first = INT_MIN;

    for (int i = 0; i < n; ++i)
    {

        cin >> a[i];

        if (a[i] < mini.first)
        {
            mini.first = a[i];
            mini.second = {i};
        }
        else if (a[i] == mini.first)
        {
            mini.second.push_back(i);
        }

        if (a[i] > maxi.first)
        {
            maxi.first = a[i];
            maxi.second = {i};
        }
        else if (a[i] == maxi.first)
        {
            maxi.second.push_back(i);
        }
    }
    // cout << "MINI\n";
    // cout << mini.first << "\n";
    // for(auto&it: mini.second){
    //     cout << it << " ";
    // }
    // cout << "\nMAXI\n";
    // cout << maxi.first << "\n";
    // for(auto&it: maxi.second){
    //     cout << it << " ";
    // }



    if (mini.second[0] == 0 || maxi.second.back() == n - 1)
    {
        cout << maxi.first - mini.first << "\n";
        return;
    }

    int max_ans = INT_MIN;

    

    for (auto &maxi_index : maxi.second)
    {
        // rotate once for each maxi index to end
        max_ans = max(max_ans, maxi.first - min(a[maxi_index + 1], a[0]));
    }

    for (auto &mini_index : mini.second)
    {
        max_ans = max(max_ans, max(a[mini_index - 1], a[n - 1]) - mini.first);
    }

    for(int i = 1; i < n; i++){
        max_ans = max(a[i - 1] - a[i], max_ans);
    }
    max_ans = max(max_ans, a[n - 1] - a[0]);
    cout << max_ans << "\n";
}

// void solve(){
//     int n;
//     cin >> n;
//     vector<int> a(n + 1);
//     for(int i = 1; i <= n; ++i){
//         cin >> a[i];
//     }
//     a[0] = a[n];
//     int ans = INT_MIN;
//     for(int i = 1; i <= n; ++i){
//         ans = max(ans, a[i - 1] - a[i]);
//     }
//     for(int i = 1; i <= n -1; ++i){
//         ans = max(ans, a[n] - a[i]);
//     }
//     for(int i = 2; i <= n; ++i){
//         ans = max(ans, a[i] - a[1]);
//     }
//     cout << ans << endl;

// }
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}