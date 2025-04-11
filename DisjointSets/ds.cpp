#include <bits/stdc++.h>
using namespace std;

class DisjointSet{
    vector<int> rank, parent, size;
    public:
    DisjointSet(int n){
        rank.resize(n + 1, 0);
        parent.resize(n + 1, 0);
        size.resize(n + 1, 1);
        for(int i = 0; i <= n; i++){
            parent[i] = i;
        }
    }

    //O(1)
    int findParent(int u){
        if(parent[u] == u) return u;
        return parent[u] = findParent(parent[u]);
    }

    // O(4alpha)
    void unionByRank(int u, int v){
        int ulp_u = parent[u];
        int ulp_v = parent[v];
        if(ulp_u == ulp_v) return;
        if(rank[ulp_u] < rank[ulp_v]){
            //connect parent u to parent v
            parent[ulp_u] = ulp_v;
        }
        else if(rank[ulp_v] < rank[ulp_u]){
            //connect parent v to parent v
            parent[ulp_v] = ulp_u;
        }
        else{
            //connect any to any and increase the rank
            parent[ulp_v] = ulp_u;
            rank[ulp_u] ++;
        }
        return;
     }

  // O(4alpha) -> more intuitive
    void unionBySize(int u, int v){
        int ulp_u = findParent(u);
        int ulp_v = findParent(v);
         if(ulp_u == ulp_v) return;
        if(size[ulp_u] < size[ulp_v]){
            //connect parent u to parent v
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else{
            
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
        
        return;
     }
};
int main(){
    DisjointSet ds(7);
    ds.unionByRank(1, 2);
    ds.unionByRank(2, 3);
    ds.unionByRank(4, 5);
    ds.unionByRank(6, 7);
    ds.unionByRank(5, 6);

    //3 and 7 in same connected components or not?

    if(ds.findParent(3) == ds.findParent(7)){
        cout << "Same\n";
    }else{
        cout << "Not Same\n";
    }

    ds.unionByRank(2, 4);
    if(ds.findParent(3) == ds.findParent(7)){
        cout << "Same\n";
    }else{
        cout << "Not Same\n";
    }


    return 0;
}