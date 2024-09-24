#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void update(char sign, int first, int second, vector<int>& abc){
    if(sign == '>'){
        abc[first] += 1;
        abc[second] -= 1;
    }else{
        abc[second] += 1;
        abc[first] -= 1;
    }

}

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    char Sab, Sac, Sbc;
    cin >> Sab >> Sac >> Sbc;

    vector<int> abc(3, 0);
    update(Sab, 0, 1, abc);
    update(Sac, 0, 2, abc);
    update(Sbc, 1, 2, abc);

    for(int i = 0; i < 3; i++){
        if(abc[i] == 0){
            char ans = 'A' + i;
            cout << ans << '\n';
            return 0;
        }
    }

    
    cout << "NO" << '\n';

    return 0;
}