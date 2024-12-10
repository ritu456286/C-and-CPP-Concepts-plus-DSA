#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    int n, q, a, b;
    cin >> n >> q;
    string s;
    cin >> s;
    //for each prefix, calculate frequency of every 26 character
    vector<vector<int>> prefixFreq(n + 1, vector<int>(27, 0));

    for(int i = 0; i < n; i++){
    
        prefixFreq[i + 1] = prefixFreq[i];
        
        prefixFreq[i + 1][s[i] - 'a' + 1] += 1;
    }
  
    vector<char> outputs(q);
    for(int i = 0; i < q; i++){
        cin >> a >> b;
        
        char mostFreq = 'a';  
        int frequency = 0;
       
        for(int i = 1; i <= 26; i++){
            
            int currFreq = prefixFreq[b+1][i] - prefixFreq[a][i];
            if(frequency < currFreq){
                frequency = currFreq;
                mostFreq = 'a' + (i - 1);
            }
        }
      
        outputs[i] = mostFreq;

    }
    for(int i = 0; i < q; i++) cout << outputs[i] << "\n";

    return 0;
}