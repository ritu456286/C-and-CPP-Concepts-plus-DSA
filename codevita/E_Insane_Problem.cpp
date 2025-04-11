// #include <bits/stdc++.h>
// #define MOD 1000000007
// #define ll long long

// using namespace std;

// void solve() {
//     ll k, l1, r1, l2, r2;
//     cin >> k >> l1 >> r1 >> l2 >> r2;

//     ll count = 0;

//     for (ll x = l1; x <= r1; ++x) {
//         ll min_y = max(l2, x);
//         ll max_y = min(r2, x * (ll)pow(k, floor(log(r2 / x) / log(k))));
//         if(min_y <= max_y){
//             count += (max_y - min_y) / 1 + 1;
//         }
//     }

//     cout << count << "\n";
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }

//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll count_pairs(ll k, ll l1, ll r1, ll l2, ll r2) {
    ll count = 0;

    for (ll x = l1; x <= r1; ++x) {
        // Start with the first y that satisfies the conditions
        ll y = x;
        ll power = 0;

        // Find all valid y values
        while (y <= r2) {
            // Check if y is within the second range
            if (y >= l2) {
                count++;
            }

            // Break if next multiplication would overflow or exceed r2
            if (y > r2 / k) break;

            // Multiply y by k
            y *= k;
            power++;
        }
    }

    return count;
}

void solve() {
    ll k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;

    cout << count_pairs(k, l1, r1, l2, r2) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}