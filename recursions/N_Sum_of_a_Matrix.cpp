#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void printSum(int curr_row, int curr_col, int a[][100], int b[][100], int& r, int& c){
    if(curr_row >= r) return;
    if(curr_col >= c){
        cout << "\n";
        printSum(++curr_row, 0, a, b, r, c);
        return;
    }
    cout << a[curr_row][curr_col] + b[curr_row][curr_col] << " "; 
    printSum(curr_row, ++curr_col, a, b, r, c);
}

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    int r, c;
    cin >> r >> c;
    int a[100][100], b[100][100];
    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++)
            cin >> a[i][j];
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++)
            cin >> b[i][j];
    }
    printSum(0, 0, a, b, r, c);  

    return 0;
}