# include <iostream>
using namespace std;
int fact(int num){
    int ans = 1;
    for (int i = 1; i <= num; i++){
        ans = ans*i;
    }
    return ans;
}
int main(){
    int n, r;
    cout << "Enter n = ";
    cin >> n;
    cout << "Enter r = ";
    cin >> r;
    int nCr = fact(n)/(fact(n-r)*fact(r));
    cout << "Answer = " << nCr << endl;
    return 0;
}