#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n ;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i  <n; i++){
        cin >> a[i];
    }
    
    queue<int> q;
    vector<int> freq(n + 1);
    for(int i = 0; i < n; i++){
        freq[a[i]]++;
    }
    for(int i = 1; i <= n; i++){
        if(freq[i] == 0){
            q.push(i);
        }
    }

    vector<int> b(n);
    b[0] = a[0];
    int curr_mode = a[0];
    unordered_map<int, bool> isMode;
    isMode[a[0]] = true;
    int mode_freq = 1;
    for(int i = 1; i < n; i++){
        if(isMode[a[i]]){
            b[i] = q.front();
            isMode[b[i]] = true;
            q.pop();
        }else{
            b[i] = a[i];
            isMode[a[i]] = true;
        }
    }

    for(int i = 0; i < n; i++){
        cout << b[i] << " "; 
    }
    cout << "\n";


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