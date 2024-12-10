#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long 

using namespace std;

vector<int>arr;


bool isRound(int num){
    string s_num = to_string(num);
    int count = 0;
    for(char& i: s_num){
        if(i != '0'){
            count++;
        }
        if(count > 1) return false;
    }
    return true;
}


// Compute round numbers only once
void precompute_round_numbers(){
    for(int i = 1; i <= 1000000; ++i){
        if(isRound(i)){
            arr.push_back(i);
        }
        
    }
}

void solve(){
    
    int n;
    cin >> n;
    // fun();
    int ans = 0;
    for(auto& num: arr){
        // cout << num;
        if(num <= n) ans++;
        else break;
    }

    cout << ans << "\n";
}
int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);
    precompute_round_numbers();
    int t;
    cin >> t;
    // fun();
    while(t--){
        solve();
    }
    return 0;
}
