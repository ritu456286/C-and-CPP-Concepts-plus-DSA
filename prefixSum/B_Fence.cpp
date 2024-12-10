#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    int n,k;
    cin >> n >> k;
    vector<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];
 
    int j = k, i = 0;
    int min_sum = accumulate(h.begin(), h.begin() + k, 0);
    int curr_sum = min_sum;
    int ans = 0;
    while(j < n){
        curr_sum -= h[i++];
        curr_sum += h[j++];
        if(curr_sum < min_sum){
            min_sum = curr_sum;
            ans = i;
        }
    }
    cout << ans + 1 << "\n";



    return 0;
}