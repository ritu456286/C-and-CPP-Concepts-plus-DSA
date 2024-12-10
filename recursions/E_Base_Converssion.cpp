#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

ll binary_num(ll num){
    if(num <= 1) return num;
    ll r = binary_num(num/2);
    return r*10 + (num % 2);

}

string binary_conversion(ll num){
    if(num == 0) return "0";
    if(num == 1) return "1";
    string result = "";
    result += binary_conversion(num/2);
    result += (num % 2 == 0 ? "0" : "1");
    return result;
}

void solve(){
    
    ll N;
    cin >> N;
    cout << binary_conversion(N) << '\n';


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