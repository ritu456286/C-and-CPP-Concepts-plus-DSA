#include <bits/stdc++.h>
using namespace std;
void bfs(int i, int comp, vector<int>& visited, vector<int>& C, unordered_map<int, vector<int>>& adj){
	visited[i] = 1;
	queue<int> q;
	q.push(i);
	C[i] = comp;
	while(!q.empty()){
		int u = q.front();
		C[u] = comp;
		q.pop();
		for(int v: adj[u]){
			if(!visited[v]){
				C[v] = comp;
				q.push(v);
				visited[v] = 1;
			}
		}
	}
}
int main() {
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<int> P(n), Q(n);
		for(int i = 0; i < n; i++){
			cin >> P[i];
		}
		for(int i = 0; i < n; i++){
			cin >> Q[i];
		}
		unordered_map<int, vector<int>> adj;
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			adj[P[x - 1]].push_back(P[y - 1]);
			adj[P[y - 1]].push_back(P[x - 1]);
		}
		//find connected components;
		int comp = -1;
		vector<int> C(n + 1);
        for(int i = 0; i < n + 1; i++){
            C[i] = i;
        }
		vector<int> visited(n + 1, 0);
		for(auto it: adj){
            int i = it.first;
			if(!visited[i]){
				bfs(i, comp, visited, C, adj);
				comp--;
			}
		}
        // for(int i = 0; i < n + 1; i++){
        //     cout << C[i] << ",";
        // }
		int flag = 1;
		for(int i = 0; i < n; i++){
			if(Q[i] != P[i]){
				if(C[P[i]] != C[Q[i]]){
					cout << "NO" << endl;
					flag = 0;
					break;
				}
			}
		}
		if(flag) cout << "YES" << endl;
	}
}