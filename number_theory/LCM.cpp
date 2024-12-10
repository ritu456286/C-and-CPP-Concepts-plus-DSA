#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

//O(log(min(a, b)))
int findGCD(int a, int b){
    if(a == 0) return b;
    if(b == 0) return a;
    if(a == b) return a;
    if(a < b){
        return findGCD(b % a, a);
    }
    return findGCD(b, a % b);
}

//O(min(a, b))
int findLCM(int a, int b){
    int greater = max(a, b);
   
    int smallest = min(a, b);
   
    int i = greater;
    while(true){
        if(i % smallest == 0) return i;
        i += greater;
    }
    
}

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    int a, b;
    cin >> a >> b;
    // int gcd = findGCD(a, b);
    // int lcm = (a * b) / gcd;
    // cout << lcm << endl;
    cout << findLCM(a, b) << endl;


    return 0;
}