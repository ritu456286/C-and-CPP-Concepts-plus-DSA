#include <iostream>
#include <vector>
#include <string>
using namespace std;

void generateBin(vector<string>& ans, int n, string binStr){
    if(n == 0){
        ans.push_back(binStr);
        // binStr.pop_back();
        return;
    }
    binStr.push_back('0');
    generateBin(ans, n - 1, binStr);
    binStr.pop_back();
    binStr.push_back('1');
    generateBin(ans, n - 1, binStr);
}


void generateBin2(int i, string bits){
    if(i == bits.size()){
        cout << bits << endl;
        return;
    }
    bits[i] = '0';
    generateBin2(i + 1, bits);
    bits[i] = '1';
    generateBin2(i + 1, bits);


}

int main(){
    int n = 4;
    vector<string> ans;
    string binStr = "";
    // generateBin(ans, n, binStr);
    // for(int i = 0; i < ans.size(); i++){
    //     cout << ans[i] << endl;
    // }

    n = 4;
    string bits = "    ";
    generateBin2(0, bits);
    return 0;
}