#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;


void toh(int n, int from, int aux, int to){
    if(n == 1){
        cout << from << " " << to << "\n";
        return;
    }
  
    //move n - 1 disks from -> aux
    toh(n - 1, from, to, aux);
    cout << from << " " << to << "\n";
    //put back those n -1 disk aux -> to
    toh(n -1, aux, from, to);
    
    return;
}
int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    int n;
    cin >> n;
    cout << ((1 << n) - 1) << "\n";
    toh(n, 1, 2, 3);
    

    return 0;
}