#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long 

using namespace std;


void solve(){
    int dx[4] = {-1,1,-1,1}, dy[4] = {-1,1,1,-1};
    int x1,x2,y1,y2,a,b, ans = 0;
    cin >> a >> b >> x1 >> y1 >> x2 >> y2;

    set<pair<int, int>> st1, st2;
    for(int i = 0; i < 4;  ++i){
        st1.insert({x1 + dx[i]*a, y1 + dy[i]*b});
        st1.insert({x1 - dx[i]*b, y1 + dy[i]*a});
        st2.insert({x2 + dx[i]*a, y2 + dy[i]*b});
        st2.insert({x2 + dx[i]*b, y2 + dy[i]*a});
    }

    for(auto knight: st1){
        if(st2.find(knight) != st2.end()){
            ++ans;
        }
    }

    cout << ans<< "\n";


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