// #include <bits/stdc++.h>
// #define MOD 1000000007
// #define ll long long

// using namespace std;

// void solve(){
    
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     int countZeroes = 0;
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//         if(a[i] == 0) countZeroes++;
//     }
    
//     bool isTogether = true;
//     if(a[0] != 0 && a[n - 1] != 0){
//         isTogether = false;
//     }else{
//         if(a[0] == 0 && a[n - 1] != 0){
//             int index = -1;
//             for(int i = 0; i < n; i++){
//                 if(a[i] == 0 && i == index + 1){
//                     index = i;
//                 }else if(a[i] == 0 && i != index + 1){
//                     isTogether = false;
//                     break;
//                 }
//             }
        
//         }
//         else if(a[n - 1] == 0 && a[0] != 0){
//             int index= n;
//             for(int i = n - 1; i >= 0; i--){
//                 if(a[i] == 0 && i == index - 1){
//                     index = i;
//                 }else if(a[i] == 0 && i != index - 1){
//                     isTogether = false;
//                     break;
//                 }
//             }
//         }else{
//             int i = 0, j = n - 1;
//             int index_i = -1;
//             int index_j = n;
//             while(i < j){
//                 if(a[i] == 0) {
//                     if(i == index_i + 1)
//                     index_i = i;
//                     else{
//                         isTogether = false;
//                         break;
//                     }
//                 }
//                 if(a[j] == 0){
//                     if(j == index_j - 1)
//                     index_j = j;
//                     else{
//                         isTogether = false;
//                         break;
//                     }
                    
//                 }
//                 i++;
//                 j--;
                
//             }
//         }
//     }

//     if(countZeroes == n){
//         cout << 0 << endl;
//     }else if(countZeroes == 0){
//         cout << 1 << endl;
//     }else if(countZeroes > 0 && countZeroes < n){
//         if(isTogether) cout << 1 << endl;
//         else cout << 2 << endl;
//     }

//     return;

// }
// int main(){
  
//     ios_base::sync_with_stdio(0);cin.tie(NULL);

//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int countZeroes = 0;
    bool scatteredZeros = false;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) countZeroes++;
    }

    // Check if zeros are scattered
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            while (i < n && a[i] == 0) i++;
            if (i < n && a[i] != 0 && a[i - 1] != 0) scatteredZeros = true;
            break;
        }
    }

    if (countZeroes == n) {
        cout << 0 << endl;
    } else if (countZeroes == 0) {
        cout << 1 << endl;
    } else if (scatteredZeros) {
        cout << 2 << endl;
    } else {
        cout << 1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
