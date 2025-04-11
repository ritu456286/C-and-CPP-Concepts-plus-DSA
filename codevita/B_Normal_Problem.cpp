#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    string  a;
    cin >> a;
    string b;
    int n = a.size();
    for(int i = n - 1; i >= 0; i--){
        if(a[i] == 'p'){
            b += 'q';
        }else if(a[i] == 'q'){
            b += 'p';
        }else{
            b += 'w';
        }
    }

    cout << b << endl;
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