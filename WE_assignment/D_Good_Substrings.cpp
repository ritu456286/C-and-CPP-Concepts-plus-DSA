#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
// #define vi vector<int>
// #define vl vector<long>
// #define vll vector<long long>
// #define print(a) cout << a << endl

using namespace std;

// inline int lg(int x) { return 31 - __builtin_clz(x); }
// inline int lg(long x) { return 31 - __builtin_clzl(x); }
// inline int lg(long long x) { return 63 - __builtin_clzll(x); }

// void solve()
// {
//     string s, v;
//     cin >> s;
//     cin >> v;
//     int k;
//     cin >> k;
//     int n = s.size();

//     unordered_set<string> st;

//     for (int i = 0; i < n; i++)
//     {
//         int curr_bad = 0;

//         for (int j = i; j < n; j++)
//         {
//             if (v[s[j] - 'a'] == '0')
//             {
//                 curr_bad++;
//             }
//             if (curr_bad > k)
//                 break;

//             st.insert(s.substr(i, j - i + 1));
//         }
//     }
//     cout << st.size() << endl;
// }
 // hash1 = (hash1 * p + (s[j] - 'a' + 1)) % m;
            // hash2 = (hash2 * p2 + (s[j] - 'a' + 1)) % m;
// Custom hash function for pair<ll, ll>
struct pair_hash {
    size_t operator()(const pair<ll, ll>& p) const {
        auto h1 = hash<ll>()(p.first);
        auto h2 = hash<ll>()(p.second);
        // Combine the two hash values.
        return h1 ^ (h2 + 0x9e3779b97f4a7c15ULL + (h1 << 6) + (h1 >> 2));
    }
};
//use unordered_set<pair<ll, ll>, pair_hash> st; or unordered_map
void solve2()
{
    string s, v; cin >> s >> v;
    ll k; cin >> k;
    unordered_set<pair<ll, ll>, pair_hash> st;
    ll n = s.size();
    for (int i = 0; i < n; ++i)
    {
        // ll p = 31 , p2 = 29;
        ll hash1 = 0, hash2 = 0;
        ll curr_bad = 0;
        ll pow1 = 1, pow2 = 1;
        ll pow1 = 1;
        for (int j = i; j < n; ++j)
        {
            curr_bad += (v[s[j] - 'a']=='0'?1:0);
            if (curr_bad > k) break;
            hash1 = (hash1 + (s[j] - 'a' + 1) * pow1)%MOD;
            hash2 = (hash2 + (s[j] - 'a' + 1) * pow2)%MOD;
            pow1 = (pow1*31)%MOD;
            pow2 = (pow2*29)%MOD;
            st.insert({hash1, hash2});
        }
    }
    cout<<st.size()<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    // BRUTE FORCE -> O(n**2 * len_of_substring)
    //  solve();
    solve2();

    // RABIN KARP ->
    return 0;
}