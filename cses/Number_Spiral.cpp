#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long y, x;
        cin >> y >> x;

        // Determine the "layer" of the spiral
        long long n = max(y, x);
        long long result;

        // Check whether the layer is odd or even
        if (n % 2 == 0) {
            if (y == n) {
                result = n * n - (n - x);
            } else {
                result = n * n - (y - 1);
            }
        } else {
            if (x == n) {
                result = n * n - (n - y);
            } else {
                result = n * n - (x - 1);
            }
        }

        // Output the result for the current test case
        cout << result << endl;
    }
    
    return 0;
}
