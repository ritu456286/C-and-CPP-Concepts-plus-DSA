# include <iostream>
using namespace std;
int power(int a, int b ){
    int ans = 1;
    for (int i = 1; i <= b; i++){
        ans = ans*a;       
    }
    return ans;
}
int main(){
    int a, b;
    cout << "Enter a = ";
    cin >> a;
    cout << "Enter b = ";
    cin >> b;
    int ans = power(a, b);
    cout << "Answer = " << ans << endl;
    return 0;
}
