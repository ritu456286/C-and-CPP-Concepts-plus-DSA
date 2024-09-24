//https://codeforces.com/contest/339/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    //s contains only 1, 2 ,3 and +
    vector<int> freq(3);
    for(auto&c : s){
        if(c != '+')
            freq[c - '1']++;
    }
    string output = "";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < freq[i]; ++j){
            if(!output.empty()){
                output += '+';
            }
            output += ('1' + i);
        }
        
    }
    
    cout << output << endl;
}