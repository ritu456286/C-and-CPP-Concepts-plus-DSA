#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

bool dfs(int i, unordered_map<int, vector<int>>& adj, vector<int>& visited, vector<int>& passengers){
    visited[i] = 1;
    if(passengers[i-1] == 1) return 1;
    for(auto& node: adj[i]){
        if(!visited[node]){
            if(dfs(node, adj, visited, passengers)) return 1;
        }
    }
    return 0;
}

int solve(int n, vector<int>& passengers, vector<vector<int>>& edges){
    
    unordered_map<int, vector<int>> adj;
    for(auto&e: edges){
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    }    

    // int maxAns = adj[1];
    int ans = 0;
    vector<int> visited(n + 1, 0);
    visited[1] = 1;
    for(int path_node: adj[1]){
        if(!visited[path_node]){
            ans += dfs(path_node, adj, visited, passengers);
        }
    }
    return ans;
}
int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    int t;
    cin >> t;
    int n;
    vector<int>passengers(n);
    vector<vector<int>> edges(n - 1, vector<int>(2, 0));
    while(t--){
        cin >> n;
        for(int i = 0; i < n; ++i){
            cin >> passengers[i];
        }
        for(int i =0; i < n -1; i++){
            cin >> edges[i][0] >> edges[i][1];
        }
        cout << solve(n, passengers, edges) << endl;
    }
    return 0;
}