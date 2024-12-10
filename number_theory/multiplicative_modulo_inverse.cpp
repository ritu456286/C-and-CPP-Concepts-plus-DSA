//(A*B) % k = 1, given A, k, find B;
//(A * B) - 1 = q*k
//(A*B - q*k) = 1
//(A*B + k*(-q)) = 1;
//ax + by = 1;
//B exists as integer only if gcd(A, k) = 1 => A and K are co-prime
//
//then 
//by extended euclidean, we can find the values of B and (-q) 

//ax + by = gcd(a, b) , then you can find x and y which will be surely integers

#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

class Triplet {
    public:
    int x, y, gcd;
};

Triplet extendedEuclidean(int a, int b){
    
    //base case
    if(b == 0){
        Triplet ans;
        ans.gcd = a;
        ans.x = 1;
        ans.y = 0;
        return ans;
    }

    Triplet intermediateAns = extendedEuclidean(b, a % b);
    Triplet finalAns;
    finalAns.gcd = intermediateAns.gcd;
    finalAns.x = intermediateAns.y;
    finalAns.y = intermediateAns.x - (a/b)*intermediateAns.y;
    return finalAns;
}

int multiplicativeInverse(int A, int k){
    Triplet ans = extendedEuclidean(A, k);
    return ans.x;
}

int main(){
  
    int A = 5; int k = 12;
    int B = multiplicativeInverse(A, k);
    cout << B << endl;
    
    return 0;
}