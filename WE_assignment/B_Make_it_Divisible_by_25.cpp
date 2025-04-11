#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vl vector<long>
#define vll vector<long long>
#define print(a) cout << a << endl

using namespace std;

inline int lg(int x) { return 31 - __builtin_clz(x); }
inline int lg(long x) { return 31 - __builtin_clzl(x); }
inline int lg(long long x) { return 63 - __builtin_clzll(x); }

void solve(){
    ll n;    
    cin >> n;
    //for 00
    string s = to_string(n);
    int len = s.size();
    // print("len: " << len);
    int ops = len;
    int x2 = -1, x1 = -1;
    for(int i = len - 1; i >= 0; --i){
        if(x2 != -1 && x1 != -1) break;
        if(x2 == -1 && s[i] == '0') x2 = i;
        else if(s[i] == '0' && x1 == -1) x1 = i;
    }
    //x2 > x1
    // print("FOR 00");
    // print("x2: " << x2 << "x1: " << x1);
    if(x2 != -1 && x1 != -1){
        ops = x2 - x1 - 1 + len - x2 - 1;
    }
    //for 50
    x2 = -1, x1 = -1;
    for(int i = len - 1; i >= 0; --i){
        if(x2 != -1 && x1 != -1) break;
        if(x2 == -1 && s[i] == '0') x2 = i;
        else if(s[i] == '5' && x2 != -1 && x1 == -1) x1 = i;
    }
    //x2 > x1
    if(x2 != -1 && x1 != -1){
        ops = min(x2 - x1 - 1 + len - x2 - 1, ops);
    }
    //for 25
    x2 = -1, x1 = -1;
    for(int i = len - 1; i >= 0; --i){
        if(x2 != -1 && x1 != -1) break;
        if(x2 == -1 && s[i] == '5') x2 = i;
        else if(s[i] == '2' && x2 != -1 && x1 == -1) x1 = i;
    }
    //x2 > x1
    if(x2 != -1 && x1 != -1){
        ops = min(x2 - x1 - 1 + len - x2 - 1, ops);
    }
    //for 75
    x2 = -1, x1 = -1;
    for(int i = len - 1; i >= 0; --i){
        if(x2 != -1 && x1 != -1) break;
        if(x2 == -1 && s[i] == '5') x2 = i;
        else if(s[i] == '7' && x2 != -1 && x1 == -1) x1 = i;
    }
    //x2 > x1
    if(x2 != -1 && x1 != -1){
        ops = min(x2 - x1 - 1 + len - x2 - 1, ops);
    }
    print(ops);


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