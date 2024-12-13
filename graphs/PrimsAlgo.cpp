#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;
// Define Graph structure
struct Graph
{
    int n;                                     // Number of nodes
    vector<vector<pair<int, int>>> neighbours; // Adjacency list (stores {neighbor, weight})
};

// Function to construct a graph from edges
Graph *constructGraph(vector<vector<int>> &edges, const int &n, const int &m)
{
    Graph *g = new Graph();  // Dynamically allocate memory for the graph
    g->n = n;                // Set the number of nodes
    g->neighbours.resize(n); // Resize to fit nodes (0-based indexing)

    for (int i = 0; i < m; ++i)
    {
        int u = edges[i][0];      // Starting node of edge
        int v = edges[i][1];      // Ending node of edge
        int weight = edges[i][2]; // Weight of edge

        g->neighbours[u].push_back({v, weight}); // Add edge u -> v with weight
        g->neighbours[v].push_back({u, weight}); // Add edge v -> u with weight (for undirected graph)
    }

    return g; // Return the constructed graph
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n; // no. of nodes
    cin >> n;
    int m;
    cin >> m;
    vector<vector<int>> edges(m, vector<int>(3));
    for (int i = 0; i < m; i++)
    {
        cin >> edges[i][0] >> edges[i][1] >> edges[i][2];
    }

    Graph *g = constructGraph(edges, n, m);

    // use pq to grow the spanning tree from any vertex
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> min_heap;

    // use marked or in the tree array-> to avoid cycles, in case the node is already present in the tree
    vector<int> marked(n);

    // start with any vertex, lets say 0
    // here, i want min weight of Tree, as well the tree also, so i am taking wt, v, u or wt, parent, currNode
    // if not mst needed, just wt, use pair<int,int> in pq for wt, currNode
    int minCost = 0;
    min_heap.push({0, 0, -1});
    vector<vector<pair<int, int>>> mst(n); // u => {{v, wt}, {v2, wt2}}
    while (!min_heap.empty())
    {
        int wt = min_heap.top()[0];
        int parentNode = min_heap.top()[1];
        int currNode = min_heap.top()[2];
        if (marked[currNode])
            continue; // avoid cycles
        marked[currNode] = 1;
        if (parentNode != -1)
            mst[parentNode].push_back({currNode, wt});
        minCost += wt;
        for (auto &p : g->neighbours[currNode])
        {
            int v = p.first;
            int next_wt = p.second;
            if (!marked[v])
            {
                min_heap.push({next_wt, currNode, v});
            }
        }
    }

    // Free the allocated memory
    delete g;

    return 0;
}