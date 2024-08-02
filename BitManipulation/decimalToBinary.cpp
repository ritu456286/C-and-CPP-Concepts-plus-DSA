#include <bits/stdc++.h>
using namespace std;

string to_binary(int x){
    string ans = "";
    while(x != 0){
        ans += x % 2 ? '1' : '0';
        x /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}



int main(){
    int x;
    cin >> x;
    if(x == 0){
        cout << x << "to binary = 0 " << endl;
    }
    else{
    cout << x << "to binary " << to_binary(x) << endl;
    }

    cout << bitset<5>(x) << endl;
    return 0;
}