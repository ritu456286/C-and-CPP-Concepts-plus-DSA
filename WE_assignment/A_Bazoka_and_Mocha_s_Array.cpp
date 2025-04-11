#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n, next;
    cin >> n;
    int first;
    cin >> first;
    int prev = first;
    int isIncreasing = 0;
    for(int i = 2; i < n;++i){
        cin >> next;
        if(next < prev){
            isIncreasing -= 1;
        }
        prev = next;
    }
    int last;
    cin >> last;
    if(prev > last){
        isIncreasing -= 1;
    }
    if((isIncreasing == -1 && last <= first) || isIncreasing == 0){
        cout << "Yes\n";
        return;
    }
    cout << "No\n";
    


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