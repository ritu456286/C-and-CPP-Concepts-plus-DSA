# include <iostream>
using namespace std;
bool isodd (int n){
    if (n & 1) {
        return 1;
    }
    return 0;
}
int main(){
    int n;
    cout << "Enter number = ";
    cin >> n;
    bool answer = isodd(n);
    if (answer){
        cout << n << " is odd." << endl;
    } else{
        cout << n << " is even." << endl;
    }   
}