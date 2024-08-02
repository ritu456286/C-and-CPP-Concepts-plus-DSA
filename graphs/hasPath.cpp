#include <iostream>
using namespace std;


void printAdjacencyMAtrix(int **edges, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(edges[i][j] == 1){
            cout << "{" << i << "," << j << "}" << endl;
            }

        }
    }
}

bool DFS(int **edges, int n, int sv,bool*visited, int s){
    visited[sv] = true;
    for(int i = 0; i < n; i++){
        if(edges[sv][i] == 1 && visited[i] == false){
            if(s == i){
                return true;
            }
            bool smallOutput = DFS(edges, n, i, visited, s);
            if (!smallOutput){
                continue;
            }
            return smallOutput;
        }
    }
    return false;
}

bool hasPath(int **edges, int n, int f, int s){
    //can use DFS or BFS(any)
    //using DFS
    bool * visited = new bool[n];
    for(int i = 0; i < n; i++){
        visited[i] = false;
    }
    bool ans = DFS(edges, n, f, visited, s);
    return ans;
    
}
int main(){
    //ADJACENCY MATRIX  
    int n, e;
    cin >>n >> e;
    int ** edges = new int*[n];
    cout << "no. of vertices = " << n << ", no. of edges = " << e << endl;
    for(int i = 0; i < n; i++){
        edges[i] = new int[n];
        for(int j = 0; j < n; j++){
            edges[i][j] = 0;
        }
    }
    cout << "Enter edges";
    for(int i = 0; i < e; i++){
        cout << "i = " << i << endl;
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;

    }
    
    cout << "EDGES: " << endl;
    printAdjacencyMAtrix(edges, n);
    bool ans = hasPath(edges, n, 3, 4);
    if(ans){ cout << "True";}
    else{ cout << "false";}
    
    return 0;
}