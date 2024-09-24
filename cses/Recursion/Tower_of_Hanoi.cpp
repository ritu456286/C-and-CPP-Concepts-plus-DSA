#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void printTOH(int beg, int mid, int last){
    cout << beg << mid << endl;
    printTOH(beg, last, mid);
    
} 

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    int n;
    cin >> n;
    printTOH(n);
    return 0;
}