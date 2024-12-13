#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    int n; 
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n, 1e9));

    // Initialize the distance matrix
    for (int i = 0; i < n; i++) {
        mat[i][i] = 0;  // The distance from any node to itself is 0
    }

    int m;  // Number of edges
    cin >> m;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        mat[u][v] = min(mat[u][v], w);  // For undirected graph, you can add mat[v][u] = min(mat[v][u], w);
    }

    // Floyd-Warshall Algorithm: Find the shortest paths between all pairs of vertices
    for (int k = 0; k < n; k++) {
        for (int u = 0; u < n; u++) {
            for (int v = 0; v < n; v++) {
                if (mat[u][k] != 1e9 && mat[k][v] != 1e9) {  // If u -> k and k -> v exist
                    mat[u][v] = min(mat[u][v], mat[u][k] + mat[k][v]);
                }
            }
        }
    }

    // Output the shortest distance matrix
    cout << "Shortest distances between every pair of vertices:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 1e9) {
                cout << "INF ";  // No path exists
            } else {
                cout << mat[i][j] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
