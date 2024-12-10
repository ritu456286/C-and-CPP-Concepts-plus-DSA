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


int main(){
  
    int a = 15;
    int b = 10; //gcd(16, 10) = 2, x = 2, y = -3 => 16*2 + 10*(-3) = 2
    Triplet ans = extendedEuclidean(a, b);

    cout << ans.gcd << endl;
    cout << ans.x << endl;
    cout << ans.y << endl;
    return 0;
}