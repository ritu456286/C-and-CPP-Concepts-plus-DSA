#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

ll findGCD(ll a, ll b){
    if(a == 0) return b;
    if(b == 0) return a;
    if(a == b) return a;
    if(a < b){
        return findGCD(b, a);
    }
    return findGCD(b, a % b);
}

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    ll n;
    cin >> n;
    vector<ll> numbers(n);
    for(ll i = 0LL; i < n; i++){
        cin >> numbers[i];
    }
    ll divisor = numbers[0];
  
    if(n > 1){
        //find gcd of all the numbers
        divisor = __gcd(numbers[0], numbers[1]);
    }
    for(int i = 2; i < n; ++i){
        divisor = findGCD(divisor, numbers[i]);
    }
   
    ll count = 0LL;
    for(ll g = 1; g*g <= divisor; ++g){
        if(divisor % g == 0){
            if(divisor/g != g){
                ++count;
            }
            ++count;
        }
    }
    cout << count << "\n";
    return 0;
}