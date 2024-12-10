#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;


//TC : O(log(max(a, b)))
int findGCD(int A, int B){
    if(B == 0) return A;
    return findGCD(B, A % B);

}

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    int A, B;
    cin >> A >> B;
    cout << findGCD(A, B) << endl;
    return 0;
}