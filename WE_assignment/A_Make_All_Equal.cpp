#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n, ele;
    cin >> n;
    vector<int> freq(n + 1, 0);
    int maxFreq = 1;
    for(int i = 0; i  < n; ++i){
        cin >> ele;
        maxFreq = max(maxFreq, ++freq[ele]); 
    }   
    cout << n - maxFreq << "\n";


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