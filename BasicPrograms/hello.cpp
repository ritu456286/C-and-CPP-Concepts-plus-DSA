# include <iostream>
using namespace std;

//  WAP to show that right shift divides by 2 and left shift multiplies by 2
int main() {
    int n,m;
    cin >> n >> m;
    //right shift
    int right_n = n >> m;
    int rightCopy_n = n;
    for (int i = 1; i <= m; i++){
        rightCopy_n = rightCopy_n / 2;
    }
    cout << bool( rightCopy_n == right_n);

    int left_n = n << m;
    int leftCopy_n = n;
    for (int i = 1; i <= m; i++){
        leftCopy_n = leftCopy_n * 2;
    }
    cout << bool( leftCopy_n == left_n);
}