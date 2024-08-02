#include <bits/stdc++.h>
using namespace std;

vector<int> helper(int src, int dest, vector<vector<int>>& graph){
    unordered_map<int, vector<pair<int, int>>> adj;
    for(auto& g: graph){
        adj[g[0]].push_back({g[1], g[2]});
        adj[g[1]].push_back({g[0], g[2]});
    }

    vector<int> path;
    path.push_back(src);
    
}

int main(){
    
    return 0;
}