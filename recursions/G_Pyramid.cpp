#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void printPyramid(int curr_row, int n){
    if(curr_row > n){
        return;
    }
    for(int spaces = n - curr_row; spaces > 0; spaces--){
        cout << " ";
    }
    for(int stars = 0; stars < (2*curr_row - 1); stars++){
        cout << "*";
    }
    cout << "\n";
    printPyramid(++curr_row, n);

}

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    int n;
    cin >> n;

    printPyramid(1, n);
    

    return 0;
}