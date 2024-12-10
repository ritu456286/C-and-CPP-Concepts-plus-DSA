// #include <bits/stdc++.h>
// #define MOD 1000000007
// #define PB push_back 
// #define MP make_pair
// #define ACC accumulate
// #define MAXH priority_queue<int>
// #define MINH priority_queue<int, vector<int>, greater<int>>
// #define MAXPH priorit_queue<pair<int, int>>
// #define MINPH priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>

// using namespace std;

// typedef long long ll;

// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// typedef pair<string, string> pss;
// typedef pair<char, char> pcc;

// typedef vector<int> vi;
// typedef vector<ll> vll;
// typedef vector<string> vs;
// typedef vector<char> vc;
// typedef vector<pss> vpss;
// typedef vector<pcc> vpcc;
// typedef vector<pii> vpii;
// typedef vector<pll> vpll;
// typedef vector<vi> vvi;
// typedef vector<vll> vvll;
// typedef vector<vc> vvc;
// typedef vector<vs> vvs;

// typedef map<int, int> mpii;
// typedef map<ll, ll> mpll;
// typedef map<string, string> mpss;
// typedef map<string, int> mpsi;
// typedef map<string, ll> mpsll;
// typedef map<char, int> mpci;
// typedef map<char, ll> mpcll;
// typedef map<int, vpii> mpivpii;
// typedef map<int, int> mpii;

// typedef unordered_map<int, vpii> umpivpii;
// typedef unordered_map<int, int> umpii;
// typedef unordered_map<ll, ll> umpll;
// typedef unordered_map<string, int> umpsi;
// typedef unordered_map<char, int> umpci;
// typedef unordered_map<char, ll> umpcll;
// typedef unordered_map<string, ll> umpsll;
// typedef unordered_map<int, vi> umpivi;

// int main(){
  
//     ios_base::sync_with_stdio(0);cin.tie(NULL);

//     int n;
//     cin >> n;
//     for(inti)
    

//     return 0;
// }

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    int f(int i, vector<int>& previj, int n, int N, int Arr[]){
        if(i >= n) return 0;
        int cost = INT_MAX;
        for(int j = i; j< min(i + N, n); j++){
            if(previj[j] != 1){
                previj[j] = 1;
                cost = min(f(i + N, previj, n, N, Arr), cost) + Arr[j];
                previj[j] = 0;

            }
        }
        return cost;

    }
  public:
    int assignmentProblem(int Arr[], int N) {
        // code here
        vector<int> previj(N*N, 0);
        int n= N*N;
        int ans = f(0, previj, n, N, Arr);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        
        int Arr[n*n];
        for(int i=0; i<n*n; i++)
            cin>>Arr[i];

        Solution ob;
        cout << ob.assignmentProblem(Arr,n) << endl;
    }
    return 0;
}
// } Driver Code Ends