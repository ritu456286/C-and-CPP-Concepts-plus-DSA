#include <iostream>
#include <queue>
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


void DFS(int **edges, int n, int sv, bool * visited){
    //RECURSIVELY --> STACK IS BEING USED
    //instead of visited u can use unordered map also --> better as space acquired will be less
    cout << sv << " ";
    visited[sv] = true;
    for(int i = 0; i < n; i++){
        // if(i == sv){
        //     continue;
        // }
        // if(edges[sv][i] == 1){
        //     if(visited[i]){
        //         continue;
        //     }
        // }

        if(edges[sv][i] == 1 && visited[i] == false){

            DFS(edges, n, i, visited);
        }
    }
}

void BFS(int **edges, int n, int sv, bool * visited){
    queue<int> q;
    q.push(sv);
    visited[sv] = true;
    //use queue data structure
    while(!q.empty()){
        sv = q.front();
        q.pop();
        cout << sv << " ";
        for(int i = 0; i < n; i++){
            if(edges[sv][i] == 1 && visited[i] == false){
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

//for disconnected graphs to work as well we need to call on the BFS and DFS for any unvisited vertex

void printBFS(int **edges, int n){
    bool * visited = new bool[n];
    for(int i = 0; i < n; i++){
        visited[i] = false;   
    }
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            BFS(edges, n, i, visited);
        }
    }
    delete [] visited;

}
void printDFS(int **edges, int n){
    bool * visited = new bool[n];
    for(int i = 0; i < n; i++){
        visited[i] = false;   
    }
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            DFS(edges, n, i, visited);
        }
    }
    delete [] visited;

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
    // bool * visited = new bool[n];
    // for(int i = 0; i < n; i++){
    //     visited[i] = false;
    // }
    // int sv = 0;
    cout << "EDGES: " << endl;
    printAdjacencyMAtrix(edges, n);

    cout << "VERTICES(DFS) " << endl;
    printDFS(edges,n);
    cout << endl;

    cout << "VERTICES(BFS)" << endl;
    printBFS(edges, n);


    //PRINT 
    // print(edges, n);


    // delete [] visited;
    for(int i = 0; i < n; i++){
        delete [] edges[i];
    }
    delete edges;
    return 0;
}