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
    
    ll n, x0;
    cin >> x0 >> n;
    if(n == 0) {
        print(x0);
        return;
    }

    if(x0 % 2){
        if(n == 1){
            print(x0 + 1);
        }else if(n % 4 == 0){
            print(x0);
        }else if(n % 2 == 0){
            print(x0 - 1);
        }else if(n % 4 == 1){
            print(x0 + n);
        }else{
            print(x0 - n - 1);
        }
    }else{
        if(n == 1){
            print(x0 - 1);
        }else if(n % 4 == 0){
            print(x0);
        }else if(n % 2 == 0){
            print(x0 + 1);
        }else if(n % 4 == 1){
            print(x0 - n);
        }else{
            print(x0 + n + 1);
        }
    }
    return;



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