#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    int n;
    int mg, u, v;
    cin >> n >> mg;
    vector<vector<int>> adjg(n, vector<int>(n, 0));
    vector<vector<int>> adjh(n, vector<int>(n, 0));
    vector<vector<int>> A(n, vector<int>(n, 0));
    for(int i = 0; i < mg; i++){
        cin >> u >> v;
        adjg[u - 1][v - 1] = 1;
    }

    int mh, a, b;
    cin >> mh;
    for(int i = 0; i < mh; i++){
        cin >> a >> b;
        adjh[a - 1][b - 1] = 1;
    }
    int val;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            cin >> val;
            A[i][j] = val;
            A[j][i] = val;
        }
    }
    
    int minCost = INT_MAX;
    //permute 0 to n - 1;
    vector<int> perm(n);
    for(int i = 0; i < n; i++) perm[i] = i;
    do{
        //comparet the adgh and adgg
        int cost = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int pi = perm[i];
                int pj = perm[j];
                if(adjg[i][j] == 1 && adjh[pi][pj] == 0){
                    //add cost
                    cost += A[pi][pj];
                }else if(adjg[i][j] == 0 && adjh[pi][pj] == 1){
                    cost += A[pi][pj];
                }
            }
        }
        minCost = min(minCost, cost);


    }while(next_permutation(perm.begin(), perm.end()));

    cout << minCost << "\n";

    
    return 0;
}