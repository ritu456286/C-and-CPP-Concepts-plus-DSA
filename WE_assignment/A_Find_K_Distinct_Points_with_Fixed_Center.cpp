#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int xc, yc, k;
    cin >> xc >>  yc >> k;
    int alpha = k * xc;
    int beta = k * yc;
    if(k == 1){
        cout << alpha << " " << beta << endl;
        return;
    }
    //k = odd -> no worries , 1 to k - 1/2
    //k = even -> 1 to k -2 /2 ; if alpha = 0, alpha, -alpha; 
    //non zero , alpha, 0
//0 52 4
//0 0 2
    if(k % 2){
        for(int i = 1; i <= (k - 1)/2; ++i){
            cout << i << " " << i << endl;
            cout << (-1) * i << " " << (-1) * i << endl;
        }
        cout << alpha << " " << beta << endl;
    }else{
        for(int i = 1; i <= (k - 2)/2; ++i){
            cout << i << " " << i << endl;
            cout << (-1)*i << " " << (-1)*i << endl;
        }
        if(alpha != 0 && beta != 0){
            cout << alpha << " " << beta << endl;
            cout << 0 << " " << 0 << endl;
        }else{
            if(alpha == 0 && beta == 0){
                cout << k << " " << k << endl;
                cout << -k<< " " << -k << endl;
            }else if(alpha == 0){
                cout << alpha << " " << 0 << endl;
                cout << -alpha << " " << beta << endl;
            }else{
                cout << 0 << " " << -beta << endl;
                cout << alpha << " " << beta << endl;
            }
        }
    }
    return;


}
int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}