# include <iostream>
using namespace std;
int nthFibonacci(int num){
    int fn = 1;
    int sn = 1;
    if (num < 3){
        return 1;
    }
    int i = 3;
    while (i <= num){
        int temp = fn;
        fn = sn;
        sn = fn + temp;
        i++;
    }
    return sn;
}
int main(){
    int n;
    cin >> n;
    int ans = nthFibonacci(n);
    cout << n << "th term of fibonnaci series = " << ans << endl;   
}