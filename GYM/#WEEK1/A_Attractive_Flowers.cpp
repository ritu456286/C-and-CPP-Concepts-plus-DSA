#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    ll max_flowers = 0LL;
    if(n & 1){
        for(auto& num: a){
            max_flowers += (num % 2 ? num : num - 1); 
        }
    }else{
        for(int i = 1; i < n; i++){
            max_flowers += (a[i] % 2 ? a[i] : a[i] - 1);
        }
    }
    cout << max_flowers << "\n";

    return 0;
}   