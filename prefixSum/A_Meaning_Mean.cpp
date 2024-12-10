// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int calculateFinalValue(vector<int>& arr) {
//     vector<int> temp = arr;
//     while (temp.size() > 1) {
//         vector<int> next;
//         for (int i = 0; i < temp.size() - 1; i += 2) {
//             next.push_back((temp[i] + temp[i+1]) / 2);
//         }
//         if (temp.size() % 2 != 0) {
//             next.push_back(temp.back());
//         }
//         temp = next;
//     }
//     return temp[0];
// }

// int solveTestCase() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     int maxValue = 0;
//     sort(a.begin(), a.end());  // Sort to optimize permutations

//     do {
//         maxValue = max(maxValue, calculateFinalValue(a));
//     } while (next_permutation(a.begin(), a.end()));

//     return maxValue;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while (t--) {
//         cout << solveTestCase() << "\n";
//     }

//     return 0;
// // }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int calculateFinalValue(vector<int>& a) {
//     // Sort the array to perform the optimal operation
//     sort(a.begin(), a.end());

//     // Start from the largest element
//     int result = a.back();

//     // Combine elements from second-largest to the smallest with result
//     for (int i = a.size() - 2; i >= 0; --i) {
//         result = (result + a[i]) / 2;
//     }

//     return result;
// }

// void solveTestCase() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     // Output the maximum possible result
//     cout << calculateFinalValue(a) << "\n";
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while (t--) {
//         solveTestCase();
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solveTestCase() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sort the array to maximize result by combining smaller numbers first
    sort(a.begin(), a.end());

    // Start with the largest element
    double result = a[n - 1];

    // Combine the rest of the elements
    for (int i = n - 2; i >= 0; --i) {
        result = (result + a[i]) / 2;
    }

    // Output the result as an integer
    cout << (int)result << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solveTestCase();
    }

    return 0;
}
