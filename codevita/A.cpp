#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    int N;
    cin >> N;
    vector<int>a(N);
    for(int i = 0; i < N; i++) cin >> a[i];
    vector<int> b = a;
    //ascending
    int swaps1 = 0;
    int swaps2 = 0;
    
    for(int i = 0; i < N; i++){
        bool swappedDesc = false, swappedAsc = false;
            for(int j = 0 ; j < N - i - 1; j++){
                if(a[j + 1] < a[j]) {
                    swap(a[j], a[j + 1]);
                    swaps1++;
                    swappedAsc = true;
                }
                if(b[j + 1] > b[j]){
                    swap(b[j], b[j + 1]);
                    swaps2++;
                    swappedDesc = true;
                }
            }
            if(!swappedAsc){
                cout << swaps1 << "\n";
                return 0;
            }
            if(!swappedDesc){
                cout << swaps2 << "\n";
                return 0;
            }
        
    }

    cout << min(swaps1, swaps2) << "\n";

    //descending
    
    return 0;
}