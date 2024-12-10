#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

long countSteps(int S, int E){
    if(S > E) return 0;
    if(S == E) return 1;
    long oneStep = countSteps(S + 1, E);
    long twoSteps = countSteps(S + 2, E);
    long threesteps = countSteps(S + 3, E);
    return oneStep + twoSteps + threesteps;
}
int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    int S, E;
    cin >> S >> E;
    cout << countSteps(S, E) << '\n'; 

    return 0;
}