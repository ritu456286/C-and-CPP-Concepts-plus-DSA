#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    int n;
    cin >> n;
    if(n == 1){
        cout << 1;
        cout << "\n";
    }
    else if(n == 3 || n == 2){
        cout << "NO SOLUTION";
    }else{
        
        list<int> l {2, 4, 1, 3};
        for(int i = 5; i <= n; i++){
            if(i % 2 == 0){
                l.push_front(i);
            }else{
                l.push_back(i);
            }
        }
        for(auto i: l){
            cout << i << " ";
        }
        cout << "\n";
    }


    return 0;
}