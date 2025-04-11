#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vl vector<long>
#define vll vector<long long>

using namespace std;

inline int lg(int x) { return 31 - __builtin_clz(x); }
inline int lg(long x) { return 31 - __builtin_clzl(x); }
inline int lg(long long x) { return 63 - __builtin_clzll(x); }

void solve(){
    
    ll a, b, c;
    cin >> a >> b >> c;
    ll sum = a + b + c;
    ll num1 = sum - b;
    ll num2 = 3 * b - sum;
    
    if((num1 % (2 * b) == 0) && (num1 /(2 * b) >= 1)) {
        cout << "YES\n";
        return;
    }
    if(((num2 % c == 0) && (num2 / c >= 0)) || ((num2 % a == 0) && (num2 / a >= 0))){
        cout << "YES\n";
        return;
    }

   


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