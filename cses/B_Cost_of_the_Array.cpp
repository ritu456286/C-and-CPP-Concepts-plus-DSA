#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int first_wrong = -1;
        for (int i = 0; i < n; ++i) {
            if (a[i] != i + 1) {
                first_wrong = i + 1;
                break;
            }
        }

        if (first_wrong == -1) {
            // All elements are correct, cost is sum + 1 = k/2 + 1
            cout << (k / 2) + 1 << "\n";
            continue;
        }

        int ans = -1;
        for (int x = 1; x <= n; ++x) {
            if (a[x-1] == x) continue;

            int m_min = max(1, (x + (k-1) - n));
            if (m_min > k-1) continue;

            bool exists = false;
            if (m_min % 2 == 1) {
                exists = true;
            } else {
                if (m_min + 1 <= k-1) {
                    exists = true;
                }
            }

            if (exists) {
                ans = x;
                break;
            }
        }

        if (ans != -1) {
            cout << ans << "\n";
        } else {
            // All elements are correct up to m, cost is m+1
            // m is the sum of even subarrays
            // minimal sum is k/2
            cout << (k / 2) + 1 << "\n";
        }
    }

    return 0;
}