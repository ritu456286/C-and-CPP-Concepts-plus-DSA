#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
int main(){
    int num = 8;
    int cnt = __builtin_popcount(num);
    cout << cnt;
    return 0;
}