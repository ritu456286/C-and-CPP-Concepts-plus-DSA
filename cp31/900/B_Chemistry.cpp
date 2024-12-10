#include <bits/stdc++.h>
#define MOD 1000000007
#define long long ll

using namespace std;

void solve(){
    
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    // n - k;
    vector<int> freq(26, 0);
    bool isPalindrome = true;
    for(char&c: s){
        freq[c - 'a']++;
    }

    if((n - k) % 2 == 0){
        //even
        //all even frequency;
        for(int i = 0; i < 26; i++){
            if(freq[i] % 2 != 0){
                k--;
            }
            if(k < 0){
                isPalindrome = false;
                break;
            }
        }
    }else{
        //odd
        //all even + one odd
        bool moreOdd = true;
        
        for(int i = 0; i < 26; i++){
            if(freq[i] % 2 != 0){
                if(moreOdd){
                    moreOdd = false;
                }else{
                    k--;
                }    
            }
            if(k < 0){
                isPalindrome = false;
                break;
            }
        }
    }

    string ans = isPalindrome ? "YES" : "NO";
    cout << ans << "\n";


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