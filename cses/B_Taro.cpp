#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int family;
    char gender;
    unordered_map<int, char> mp;
    vector<string> ans(m, "No");
    for(int i = 0; i < m; i++){
        cin >> family >> gender;    
        if((mp.find(family) == mp.end()) || (mp[family] == 'F')){
            if(gender == 'M'){
                mp[family] = 'M';
                ans[i] = "Yes";
            }else{
                mp[family] = 'F';
            }
        }  
    }

    for(int i = 0; i < m; i++){
        cout << ans[i] << '\n';
    }
    

    return 0;
}