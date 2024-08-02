//do not use continue with if or switch statements as these are conditional loops so they will run ifinite times if continue is used!
# include <iostream>
using namespace std;
int main() {
    int num = 1;
    int i = 0;
        switch (num) {
            case 1: cout << "first case " << endl;
                    // break;
            case 2: cout << "second case " << endl;
                    break;
                //     i++;
                //     continue;
                    // break;
            default: cout << "default case ";
                    // break;
            case 3: cout << "third case " << endl;
                    // break;
        }
        // if (i==1) {
        //     cout << "inside if";
        //     i++;
        //     continue;
        // }
        // cout << i;
        // cout << i;
    }
    
