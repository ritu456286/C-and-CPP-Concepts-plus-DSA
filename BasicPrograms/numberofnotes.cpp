# include <iostream>
using namespace std;
int main() {
    int amount,n;
    cin >> amount;
    int start = 1;
    switch (start){
        case 1: n = amount / 100;
                cout << "Rs. 100 notes = "<< n << endl;
                amount = amount - (n*100);
        case 2: n = amount / 50;
                cout << "Rs. 50 notes = " << n << endl;
                amount = amount - (n*50);
        case 3: n = amount / 20;
                cout << "Rs. 20 notes = " << n << endl;
                amount = amount - (n*20);
        case 4: n = amount / 1;
                cout << "Rs. 1 notes = " << n << endl;
                amount = amount - (n*4);
                break;
        default: cout << "program not working properly! ";
    }
}