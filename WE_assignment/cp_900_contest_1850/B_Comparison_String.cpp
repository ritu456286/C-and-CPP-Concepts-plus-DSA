#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    //max consecutive > or <
    int currCount = 1;
    int maxCount = 0;

    for(int i = 0; i < n - 1; ++i){
        if(s[i + 1] == s[i]){
            currCount ++;
        }else{
            maxCount = max(maxCount, currCount);
            currCount = 1;
        }
    }
    maxCount = max(maxCount, currCount);

    cout << maxCount + 1 << "\n";

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