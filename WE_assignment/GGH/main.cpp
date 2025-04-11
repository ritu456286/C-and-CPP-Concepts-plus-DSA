#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

int findX(int a, int b, int c){
    int x = 0;
    for(int i = 0; i < 32; i++){
        bool bc = (c >> i) & 1;
        bool bb = (b >> i) & 1;
        bool ba = (a >> i) & 1;

        if(bc){
            if(ba && bb){
                
            }
            else{
                X |=(1 << i); //set krdo
            }
        }else{
            if(ba && bb){
                return -1;
            }
        }
    }
    return X;
}

void solve(){
    
    


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