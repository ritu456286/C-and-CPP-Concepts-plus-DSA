#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n, a;
    cin >> n;
    int oddMax = 0, evenMax = 0;
    for(int i = 1; i <= n; ++i){
        cin >> a;
        if(i % 2){
            oddMax = max(a, oddMax);
        }else{
            evenMax = max(a, evenMax);
        }
    }

    int evenSum = evenMax + n/2;
    int oddSum = oddMax + n/2 + (n % 2);
    cout << max(evenSum, oddSum) << "\n";


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