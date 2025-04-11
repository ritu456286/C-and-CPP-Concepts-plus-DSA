#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    string s = "";
    
    int rep = n >= 5 ? n / 5 : 1;
    string vowels = "aeiou";
    int indx = 0;
    int extra = n >= 5 ? n % 5: 0;
    int i = 1;
    for(; indx < 5 && i <= n;){
        for(int j = 0; j < rep; ++j){
            s += vowels[indx];
            ++i;
        }
        if(extra){
            s += vowels[indx];
            extra--;
        }

        indx++;
    }
   
    cout << s << "\n";
    
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