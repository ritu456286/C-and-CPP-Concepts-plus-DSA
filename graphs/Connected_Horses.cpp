#include <bits/stdc++.h>
#define MOD 1000000007
#define PB push_back 
#define MP make_pair
#define ACC accumulate
#define MAXH priority_queue<int>
#define MINH priority_queue<int, vector<int>, greater<int>>
#define MAXPH priorit_queue<pair<int, int>>
#define MINPH priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>

using namespace std;

typedef long long ll;

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef pair<char, char> pcc;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<pss> vpss;
typedef vector<pcc> vpcc;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<vc> vvc;
typedef vector<vs> vvs;

typedef map<int, int> mpii;
typedef map<ll, ll> mpll;
typedef map<string, string> mpss;
typedef map<string, int> mpsi;
typedef map<string, ll> mpsll;
typedef map<char, int> mpci;
typedef map<char, ll> mpcll;
typedef map<int, vpii> mpivpii;
typedef map<int, int> mpii;

typedef unordered_map<int, vpii> umpivpii;
typedef unordered_map<int, int> umpii;
typedef unordered_map<ll, ll> umpll;
typedef unordered_map<string, int> umpsi;
typedef unordered_map<char, int> umpci;
typedef unordered_map<char, ll> umpcll;
typedef unordered_map<string, ll> umpsll;
typedef unordered_map<int, vi> umpivi;

int dx[8] = {2, 2, -2, -2, 1, -1, 1, -1};
int dy[8] = {1, -1, 1, -1, -2, -2, 2, 2};

ll bfs(int i, int j, vvi& visited, vvi& board, int n, int m){
    visited[i][j] = 1;
    queue<pii> q;
    ll vertices = 1;
    q.push({i, j});
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int k = 0; k < 8; ++k){
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(nx >= 1 && ny >= 1 && nx <= n && ny <= m && board[nx][ny] != 0 && !visited[nx][ny]){
                q.push({nx, ny});
                visited[nx][ny] = 1;
                ++vertices;
            }
        }
    }
    return vertices;
}
ll fact(ll num){
    if(num == 0 || num == 1) return 1;
    ll ans = 1;
    ll multiplier = 1;
    while(multiplier <= num){
        ans = (ans * multiplier) % MOD;
        ++multiplier;
    }
    return ans;
}
void solve(){
    
    int n, m, q;
    cin >> n >> m >> q;
    vvi board(n + 1, vi(m + 1, 0));
    vpii positions;
    for(int i = 1; i <= q; i++){
        int x, y;
        cin >> x >> y;
        positions.push_back({x, y});
        board[x][y] = i;
    }

    vvi visited(n + 1, vi(m + 1, 0));
    ll ans = 1;
    for(auto p: positions){
        if(!visited[p.first][p.second]){

            ll vertices =  bfs(p.first, p.second, visited, board, n, m);
            ll permutation = fact(vertices);
            ans =  (ans * permutation) % MOD;
        }
    }
    cout << ans << endl;


}
int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}