#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

bool checkPalindrome(int i, int j, vector<int>& a){
    if(i >= j) return true;
    if(a[i] != a[j]) return false;
    return checkPalindrome(++i, --j, a);
}

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    string ans = (checkPalindrome(0, n - 1, a) ? "YES" : "NO");
    cout << ans << '\n';

    return 0;
}