#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

// Memoization map to store whether a value of 'start' can reach 'end'
unordered_map<ll, bool> dp;

bool canReach(ll start, ll end) {
    if (start > end) return false;
    if (start == end) return true;

    // If we already calculated this, return the result
    if (dp.find(start) != dp.end()) return dp[start];

    // Calculate the result recursively and store it
    bool result = canReach(start * 10, end) || canReach(start * 20, end);
    dp[start] = result;  // Memoize the result for this 'start'
    return result;
}

void solve() {
    ll n;
    cin >> n;

    string ans = (canReach(1L, n) ? "YES" : "NO");
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        dp.clear();  // Clear memoization map for each test case
        solve();
    }

    return 0;
}
