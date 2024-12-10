#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

vector<ll> divs;

void findDivisors(ll n){

    for(int i = 1; 1LL*i*i <= n; ++i){
        if(n % i == 0){
            divs.push_back(i);
            if(n/i != i){
                divs.push_back(n/i);
            }
        }
    }
    sort(divs.begin(), divs.end());
    return;
}

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    ll n, k;
    cin >> n >> k;
    findDivisors(n);
    if(k > divs.size()){
        cout << -1 << "\n";
    }else{
        cout << divs[k - 1] << "\n";
    }

    return 0;
}