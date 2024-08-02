#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

double distanceFromOrigin(int x, int y) {
    return sqrt(x * x + y * y);
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<double> distances(n);
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        distances[i] = distanceFromOrigin(x, y);
    }

    // The smallest possible size of the polygon that can cover all points
    // regardless of its rotation is the maximum distance any point is from the origin.
    double R = *max_element(distances.begin(), distances.end());

    cout.precision(12);
    cout << R << endl;

    return 0;
}