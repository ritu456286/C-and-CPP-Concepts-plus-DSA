#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    // DIJKSTRA -> for shortest path in both directed and undirected graphs
    // BFS + distance vector (will act as visited array as well) -> for unweighted or uniformly weighted undirected graphs
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
    unordered_map<int, vector<pair<int, int>>> graph;
    int n, m, u, v, wt, src;
    cin >> n >> m >> src;

    // Build the graph
    for (int i = 0; i < m; i++) {
        cin >> u >> v >> wt;
        graph[u].push_back({wt, v});
        // If undirected graph, also add the reverse edge:
        // graph[v].push_back({wt, u});
    }

    // Single source shortest path
    vector<int> distance(n, 1e9);
    distance[src] = 0;
    minHeap.push({0, src});

    while (!minHeap.empty()) {
        int currNode = minHeap.top().second;
        int weight = minHeap.top().first;
        minHeap.pop();

        // Iterate through the neighbors
        for (int i = 0; i < graph[currNode].size(); i++) {
            int edgeWeight = graph[currNode][i].first;
            int neighbourNode = graph[currNode][i].second;

            if (distance[neighbourNode] > edgeWeight + weight) {
                distance[neighbourNode] = edgeWeight + weight;
                minHeap.push({distance[neighbourNode], neighbourNode});
            }
        }
    }

    // Optionally, print the distances
    for (int i = 0; i < n; ++i) {
        if (distance[i] == 1e9) {
            cout << "INF ";
        } else {
            cout << distance[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
