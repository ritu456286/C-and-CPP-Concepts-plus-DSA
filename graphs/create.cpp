#include <iostream>
#include <vector>
using namespace std;
//method 1 using static arrays only
struct edge{
    int src;
    int dest;
};


int main(){
    int v = 4;
    int graph[v][v];
    for(int i = 0; i < v; i++){
        for(int j= 0; j < v; j++){
            cout << "Enter neighbours of " << i << ": ";
            cin >> graph[i][j];
            if (graph[i][j] == -1){
                break;
            }
        }
    }

    cout << "Adjacency list formed: " << endl;
    for(int i = 0; i<v ; i++) {
        int j = 0;
        cout << i << ": ";
        while (graph[i][j] != -1 && j < v){
            cout << graph[i][j] << ",";
            j++;
        }
        cout << endl;
    }
    
    return 0;
}