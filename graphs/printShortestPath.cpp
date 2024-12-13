#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(int n, vector<vector<pair<int, int>>>& graph, int src, vector<int>& dist, vector<int>& parent) {
    // Priority queue for Dijkstra's algorithm (min-heap)
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // Initialize the distances and parent arrays
    dist.assign(n, INT_MAX);
    parent.assign(n, -1);
    dist[src] = 0;

    // Push the source node with distance 0 into the priority queue
    pq.push({0, src});

    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        // If the current distance is greater than the already found distance, skip processing
        if (d > dist[u]) {
            continue;
        }

        // Process all neighbors of u
        for (auto& edge : graph[u]) {
            int v = edge.first;
            int weight = edge.second;

            // Relax the edge
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                parent[v] = u;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

// Function to reconstruct the shortest path from src to a target node
vector<int> getPath(int target, vector<int>& parent) {
    vector<int> path;
    for (int v = target; v != -1; v = parent[v]) {
        path.push_back(v);
    }
    reverse(path.begin(), path.end());  // To get the path from source to target
    return path;
}

int main() {
    int n, m, src;
    cin >> n >> m >> src;

    vector<vector<pair<int, int>>> graph(n);  // adjacency list representation of the graph
    for (int i = 0; i < m; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;
        graph[u].push_back({v, wt});  // directed edge u -> v with weight wt
        graph[v].push_back({u, wt});  // for undirected graph, add reverse edge as well
    }

    vector<int> dist(n), parent(n);
    dijkstra(n, graph, src, dist, parent);

    // Output the shortest distances and paths
    for (int i = 0; i < n; ++i) {
        cout << "Distance from " << src << " to " << i << " is " << dist[i] << "\n";

        if (dist[i] != INT_MAX) {
            vector<int> path = getPath(i, parent);
            cout << "Path: ";
            for (int node : path) {
                cout << node << " ";
            }
            cout << endl;
        } else {
            cout << "No path to node " << i << endl;
        }
    }

    return 0;
}
