#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

//O(NloglogN)
void updatePrimes(vector<int>& isPrime, int& p, int& n){
    
    for(int i = p*p; i <= n; i += p){ //start i from 3*3 or 4*4, etc.
        isPrime[i] = 0;  
    }
    return;
}

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> isPrime(n + 1, 1); //sieve
    int countPrimes = 0;
    for(int i = 2; i*i <= n; i++){
        if(isPrime[i] == 1){
            
            
            updatePrimes(isPrime, i, n);
            
        }
    }
    for(int i = 2; i <= n; i++){
        countPrimes += isPrime[i];
    }
    cout << countPrimes << endl;

    return 0;
}