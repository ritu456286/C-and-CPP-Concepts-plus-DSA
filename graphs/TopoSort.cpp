#include <bits/stdc++.h>
using namespace std;

vector<int> topoSortBFS(int n, vector<vector<int>>& graph) {
    vector<int> inDegree(n, 0);
    vector<int> topoOrder;

    // Calculate in-degree for each node
    for (int i = 0; i < n; ++i) {
        for (int neighbor : graph[i]) {
            inDegree[neighbor]++;
        }
    }

    queue<int> q;

    // Add all nodes with in-degree 0 to the queue
    for (int i = 0; i < n; ++i) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        topoOrder.push_back(node);

        // Decrease the in-degree of the neighboring nodes
        for (int neighbor : graph[node]) {
            inDegree[neighbor]--;
            if (inDegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    // If the size of topoOrder is not equal to n, there's a cycle
    if (topoOrder.size() != n) {
        cout << "Cycle detected in the graph. Topological Sort not possible!" << endl;
        return {};
    }

    return topoOrder;
}


//DFS TOPO SORT
bool dfs(int node, vector<vector<int>>& graph, vector<bool>& visited, vector<bool>& pathVisited, stack<int>& topoStack) {
    // If the node is currently being visited, it means there's a cycle
    if (pathVisited[node]) {
        return false;  // Cycle detected
    }

    // If the node is already visited, no need to visit it again
    if (visited[node]) {
        return true;
    }

    // Mark the node as being visited
    pathVisited[node] = true;

    // Visit all the neighbors of the node
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            if (!dfs(neighbor, graph, visited, pathVisited, topoStack)) {
                return false;  // Cycle detected
            }
        }
    }

    // After visiting all neighbors, mark the node as completely visited
    pathVisited[node] = false;
    visited[node] = true;

    // Push the node to the stack
    topoStack.push(node);
    return true;
}

vector<int> topoSortDFS(int n, vector<vector<int>>& graph) {
    vector<bool> visited(n, false);
    vector<bool> pathVisited(n, false);
    stack<int> topoStack;

    // Call DFS for every unvisited node
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            if (!dfs(i, graph, visited, pathVisited, topoStack)) {
                cout << "Cycle detected in the graph. Topological Sort not possible!" << endl;
                return {};  // Return an empty vector if a cycle is detected
            }
        }
    }

    // Extract the elements from the stack to form the topological order
    vector<int> topoOrder;
    while (!topoStack.empty()) {
        topoOrder.push_back(topoStack.top());
        topoStack.pop();
    }

    return topoOrder;
}


int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);  // Directed edge from u to v
    }

    // vector<int> topoOrder = topoSortBFS(n, graph);
    vector<int> topoOrder = topoSortDFS(n, graph);

    if (!topoOrder.empty()) {
        for (int node : topoOrder) {
            cout << node << " ";
        }
    }

    return 0;
}
