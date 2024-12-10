#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

// Function to compute the initial sum of a and b
vector<int> compute_sum(const string &a, const string &b, int n) {
    vector<int> c(n, 0); // Result array of size n initialized to 0
    int carry = 0;

    for (int i = n - 1; i >= 0; --i) {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        c[i] = sum % 10;
        carry = sum / 10;
    }

    return c;
}

// Function to update a single digit in a or b and propagate the changes to c
int update_and_propagate(string &a, string &b, vector<int> &c, int i, int new_val, int n, bool is_a) {
    int affected = 0;
    int old_val = is_a ? (a[i] - '0') : (b[i] - '0');
    if (old_val == new_val) {
        return 0; // No change if the digit remains the same
    }

    // Update a[i] or b[i]
    if (is_a) {
        a[i] = '0' + new_val;
    } else {
        b[i] = '0' + new_val;
    }

    // Propagate the changes to c starting from position i
    int carry = 0;
    for (int pos = i; pos < n; ++pos) {
        int sum = (a[pos] - '0') + (b[pos] - '0') + carry;
        int new_c_val = sum % 10;
        carry = sum / 10;
        
        if (new_c_val != c[pos]) {
            ++affected;
            c[pos] = new_c_val;
        }

        // Stop if no carry to propagate and no further changes to c
        if (carry == 0 && new_c_val == c[pos]) {
            break;
        }
    }

    return affected;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;

    // Initial computation of c
    vector<int> c = compute_sum(a, b, n);

    // Process queries
    for (int m = 0; m < q; ++m) {
        int k, i, d;
        cin >> k >> i >> d;
        --i; // Convert to 0-based index

        int affected = 0;
        if (k == 1) {
            // Update a[i]
            affected = update_and_propagate(a, b, c, i, d, n, true);
        } else if (k == 2) {
            // Update b[i]
            affected = update_and_propagate(a, b, c, i, d, n, false);
        }

        // Output the new c[i] and the number of affected digits
        cout << c[i] << " " << affected << "\n";
    }

    return 0;
}
