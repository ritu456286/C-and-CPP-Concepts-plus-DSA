# include <iostream>
using namespace std;
bool isFib(int a){
    int fn = 1;
    int sn = 1;
    while (sn <= a){
        int temp = fn;
        fn = sn;
        if (sn == a){
            return true;
        }
        sn = temp + sn;
    }
    return false;
}
int main() {
    int n;
    cin >> n;
    int ans = isFib(n);
    cout << ans;
}